#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sep 16 18:47:58 2021

"""

import matplotlib.pyplot as plt
import numpy as np
import os
import pandas as pd
import matplotlib
from scipy.interpolate import griddata
from mpl_toolkits.mplot3d import Axes3D

matplotlib.rcParams['pdf.fonttype'] = 42
matplotlib.rcParams['ps.fonttype'] = 42

if __name__ == '__main__':
    os.chdir("/Users/lj/revolve/experiments/jlo/data/evo_only_merge")
    # os.chdir("/Users/lj/revolve/experiments/jlo/data/evo_revdeknn/")
    df = pd.read_csv("1_trajectory_iter1.tsv", sep = "\t")
    print(df)
    measures = ['x', 'y', 'robot_id']
    robot_id = df[measures[2]]
    y = df[measures[1]] * 100
    x = df[measures[0]] * 100

    figure, ax = plt.subplots()
    SIZE = 300
    ax.plot([0, 100], [0, 0], linestyle='dashed', label='target direction', linewidth=2.0)
    ax.scatter(x, y)
    # plt.plot(x, y)
    ax.set_xlabel('x (cm)')
    ax.set_ylabel('y (cm)')
    plt.show()
    figure.savefig("intensity_trajectory.pdf", bbox_inches='tight')