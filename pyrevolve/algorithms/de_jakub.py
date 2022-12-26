from typing import Callable, List, Tuple
import numpy as np
import scipy.stats as stats
from sklearn.neighbors import KNeighborsRegressor


class RevDEknn:
    def __init__(
        self,
        calculate_fitnesses: Callable[[List[float]], float],
        gamma: float, #F
        clip_min: float,
        clip_max: float,
        cr,  # CR probability
    ):
        self.calculate_fitnesses = calculate_fitnesses
        self.gamma = gamma
        self.clip_min = clip_min
        self.clip_max = clip_max
        self.cr = cr

    def _proposal(self, theta: np.ndarray, E=None):
        indices_1 = np.random.permutation(theta.shape[0])
        indices_2 = np.random.permutation(theta.shape[0])
        theta_1 = theta[indices_1]
        theta_2 = theta[indices_2]

        de_noise = self.gamma * (theta_1 - theta_2)

        if self.config_method['best']:
            tht = theta[[np.argmin(E)]]
        else:
            tht = theta

        theta_new = tht + de_noise

        p_1 = np.random.binomial(1, self.cr, tht.shape)
        return p_1 * theta_new + (1. - p_1) * tht


    async def step(self, theta, E_old) -> Tuple[np.ndarray, float]:
        """
        theta: numpy.ndarray 2D with first dimension population size, second dimension # weights
               this is what we are optimizing
        E_old: numpy.ndarray 1D with each item a fitness value for the individual at the same index in the population
        """

        # (1. Generate)
        theta_new = self._proposal(theta, E_old)
        theta_new = np.clip(
            theta_new,
            a_min=self.clip_min,
            a_max=self.clip_max,
        )

        # (2. Evaluate)
        E_new = await self.calculate_fitnesses(
            theta_new,
        )

        # (3. Select)
        theta_cat = np.concatenate((theta, theta_new), 0)
        E_cat = np.concatenate((E_old, E_new), 0)

        indx = np.argsort(E_cat.squeeze())

        return theta_cat[indx[: theta.shape[0]], :], E_cat[indx[: theta.shape[0]], :]
