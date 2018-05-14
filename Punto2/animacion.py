import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
data = np.genfromtxt('Cuerda.dat')


plt.imshow(data)

plt.savefig('init.png')

#importar paquete animation.  
M = []
for i in range(5):
    plot = plt.plot(np.linspace(0,100, len(string_history[0,:])),string_history[i,:], animated=True)
   
    M.append(plot)

gif = animation.ArtistAnimation(fig, interval=50, blit=True,repeat_delay=5)
gif.save('GifCuerda.mp4')


plt.plot(M[6,:])
