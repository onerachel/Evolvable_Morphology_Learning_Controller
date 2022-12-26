from dataclasses import dataclass

import multineat


@dataclass
class CppnneatBodyConfig:
    multineat_params: multineat.Parameters
    innov_db: multineat.InnovationDatabase
    rng: multineat.RNG
    mate_average: bool
    interspecies_crossover: bool