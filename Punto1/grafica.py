import numpy as np
import matplotlib.pyplot as plt

data = np.genfromtxt('datosCP1.txt')
dimention = int(np.sqrt(data.shape[0]))
potential = data.reshape(dimention, dimention)

xi= np.linspace(0, dimention-1, dimention) 
yi = np.linspace(0, dimention-1, dimention)

xi = np.meshgrid(xi, yi)
yi= np.meshgrid(xi, yi)

dx= np.gradient(potential)
dy= np.gradient(potential)

plt.imshow(potential)
plt.streamplot(xi, yi, dy, dx, color='g')

plt.xlim(0, dimention-1)
plt.ylim(dimention-1, 0)

plt.show()

plt.title('Capacitor')
plt.savefig('placas.pdf')

