from dataclasses import dataclass

import multineat


@dataclass
class CppnneatCpgBrainConfig:
    multineat_params: multineat.Parameters
    innov_db: multineat.InnovationDatabase
    rng: multineat.RNG

    abs_output_bound: float
    use_frame_of_reference: bool
    output_signal_factor: float
    range_ub: float
    init_neuron_state: float  # initial value of neurons
    reset_neuron_random: bool  # ignore init neuron state and use random value

    mate_average: bool
    interspecies_crossover: bool
