# Multi line plot
# Object oriented interface
import numpy as np
import matplotlib.pyplot as plt
x = np.arange(0,4*np.pi,0.1)
y = np.sin(x)
z = np.cos(x)
# t = np.tan(x)
fig, ax = plt.subplots()
ax.plot(x,y)
ax.plot(x,z)
# ax.plot(x,t)
plt.show()