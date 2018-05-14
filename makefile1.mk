V.png: grafica.py placas.pdf
	python grafica.py

placas.pdf: a.out
	./a.out > placas.pdf

a.out: placas.cpp
	g++ placas.cpp -o a.out
