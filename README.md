# The Effects of Learning in Morphologically Evolving Robot

* [Video](https://youtu.be/rtLjsr2JDX8/)

* [Paper](https://www.frontiersin.org/articles/10.3389/frobt.2022.797393/full)

## Purpose
Simultaneously evolving morphologies (bodies) and controllers (brains) of robots can cause a mismatch between the inherited body and brain in the offspring. To mitigate this problem, the addition of an infant learning period has been proposed relatively long ago by the so-called Triangle of Life approach. However, an empirical assessment is still lacking to-date. In this research, we investigate the effects of such a learning mechanism from different perspectives. Using extensive simulations we show that learning can greatly increase task performance and reduce the number of generations required to reach a certain fitness level compared to the purely evolutionary approach. Furthermore, we demonstrate that the evolved morphologies will be also different, even though learning only directly affects the controllers. This provides a quantitative demonstration that changes in the brain can induce changes in the body. Finally, we examine the \textit{learning delta} defined as the performance difference between the inherited and the learned brain, and find that it is growing throughout the evolutionary process. This shows that evolution produces robots with an increasing plasticity, that is, consecutive generations become better learners and, consequently, they perform better at the given task. Moreover, our results demonstrate that the Triangle of Life is not only a concept of theoretical interest, but a system methodology with practical benefits. 


## Installation

We use a gazebo based wrapper called Revolve to run our experiments. The Revolve system (https://github.com/ci-group/revolve) is supported for Linux and Mac OS X platforms. 
If all [pre-requirements](https://github.com/ci-group/revolve/wiki/Installation-Instructions-for-Gazebo) are satisfied, to install the current release run:

```bash
git@github.com:onerachel/Evolvable_Morphology_Learning_Controller.git
export SIM_HOME=`pwd` && cd $SIM_HOME/revolve
mkdir -p build && cd build
cmake ..
make -j4
```

Within the `Evolvable_Morphology_Learning_Controller/` root directory create Python virtual environment:

```bash
cd $SIM_HOME/Evolvable_Morphology_Learning_Controller
virtualenv --python python3 .venv
source .venv/bin/activate
pip install -r requirements.txt
```

*See [Installation Instructions for Revolve](https://github.com/ci-group/revolve/wiki/Installation-Instructions-for-Revolve)
for detailed instructions, and how to build from source.*

## Partial results

![fitness](https://user-images.githubusercontent.com/75667244/209550673-b7b8d8a0-bcd0-4898-b8bc-40844f66de76.png)
<img width="656" alt="Screenshot 2022-12-26 at 13 47 45" src="https://user-images.githubusercontent.com/75667244/209550769-e1b0aae6-558e-424d-b632-01eced2fafc6.png">

## For more information

* [CIGroup Website](https://www.cs.vu.nl/ci/)

## License

[Apache License 2.0](LICENSE)
