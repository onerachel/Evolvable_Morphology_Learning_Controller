from pylab import *
import sys


def zdt2(x):
    res = np.zeros(2)
    f1 = x[0]
    g = 1.0
    for i in range(1, len(x)):
        g +=  9.0 / (len(x) - 1) * x[i];
    h = 1.0 - (f1 / g)**2;
    f2 = g * h;
    return 1 - f1, 1 - f2

sys.argv.pop(0)

for i in sys.argv:
    data = np.loadtxt(i)
    if not "obs_" in i:
        plot(data[:, 0], data[:, 1], '-', label=i)
    plot(data[:, 0], data[:, 1], 'o', label=i)
    if data.shape[1] > 2:
        plot(data[:,0] - data[:,2]*100000,  data[:,1] - data[:,3]*100000, '-', label='p')
#    fill_between(data[:,0] + data[:,2], data[:1] + data[:3])
    



xt = []
yt = []
for x in np.arange(0, 1, 0.001):
    v = np.zeros(30)
    v[0] = x
    f1, f2 = zdt2(v)
    xt += [f1]
    yt += [f2]

plot(xt, yt, label='theory')
legend(loc=0)
show()
