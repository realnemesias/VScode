import numpy as np 
import matplotlib.pyplot as plt

x = np.linspace(0, 100, 100)

y = -x**2

plt.plot(x,y,"r-")
plt.show()