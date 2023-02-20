import numpy as np 
import matplotlib.pyplot as plt
x = np.arange(0,100,0.1)
y = x*np.cos(x)

plt.plot(x,y)
plt.xlabel('x')
plt.ylabel('y')
plt.title('Lab DLS')
plt.show() 