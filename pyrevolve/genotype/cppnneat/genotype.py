from __future__ import annotations

import hashlib
import json
from typing import Any, Dict

import multineat


class CppnneatGenotype:
    _multineat_genome: multineat.Genomemultineat_genome

    def __init__(self, multineat_genome: multineat.Genome):
        self._multineat_genome = multineat_genome

    @staticmethod
    def random(
        n_inputs: int,
        n_outputs: int,
        multineat_params: multineat.Parameters,
        n_start_mutations: int,
        innov_db: multineat.InnovationDatabase,
        rng: multineat.RNG,
    ) -> CppnneatGenotype:
        multineat_genome = multineat.Genome(
            0,  # ID
            n_inputs,
            0,  # n_hidden
            n_outputs,
            False,  # FS_NEAT
            multineat.ActivationFunction.TANH,  # output activation type
            multineat.ActivationFunction.TANH,  # hidden activation type
            0,  # seed_type
            multineat_params,
            0,  # number of hidden layers
        )

        genome = CppnneatGenotype(multineat_genome)
        for _ in range(n_start_mutations):
            genome.mutate(multineat_params, innov_db, rng)

        return genome

    @property
    def multineat_genome(self) -> multineat.Genome:
        return self._multineat_genome

    def mutate(
        self,
        multineat_params: multineat.Parameters,
        innov_db: multineat.InnovationDatabase,
        rng: multineat.RNG,
    ) -> None:
        self.multineat_genome.Mutate(
            False,
            multineat.SearchMode.COMPLEXIFYING,
            innov_db,
            multineat_params,
            rng,
        )

    def mate(
        self,
        partner: CppnneatGenotype,
        multineat_params: multineat.Parameters,
        rng: multineat.RNG,
        mate_average: bool,
        interspecies_crossover: bool,
    ) -> CppnneatGenotype:
        child_multineat_genome = self.multineat_genome.Mate(
            partner.multineat_genome,
            mate_average,
            interspecies_crossover,
            rng,
            multineat_params,
        )
        return CppnneatGenotype(child_multineat_genome)

    def clone(self) -> CppnneatGenotype:
        return CppnneatGenotype(multineat.Genome(self.multineat_genome))

    def serialize_to_dict(self) -> Dict[str, Any]:
        return {"multineat_genome": self._multineat_genome.Serialize()}

    @staticmethod
    def deserialize_from_dict(serialized: Dict[str, Any]) -> CppnneatGenotype:
        multineat_genome = multineat.Genome()
        multineat_genome.Deserialize(serialized["multineat_genome"])
        return CppnneatGenotype(multineat_genome)

    def makehash(self) -> str:
        sha = hashlib.sha256()
        sha.update(self.multineat_genome.Serialize().encode())
        return sha.hexdigest()
