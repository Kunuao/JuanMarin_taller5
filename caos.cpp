#include <iostream>
#include <math.h>
using namespace std; 
// constantes y variables y condiciones iniciales
double a = 1/2*sqrt(2)
double epsilon = 10* pwd(-3)
double q1 = a; 
double q2 = -a; 
double p1 = 0.0; 
double p2 = 0.0; 

double deltaT= 0.0006; 
int t = 3000;
//IMPLEMENTACION DEOL METODO se aplica para las 4 p1 prima y p2 prima

double y[t];

int i;
double k1[t]; 
double k2[t]; 
double k3[t]; 
double k4[t]; 
double y1[t]; 
double y2[t]; 
double y3[t]; 
double y4[t];

for (i = 0 ; i<3000 -1 ; i++){
	
k1 = y[i]*-2*q1 /  pwd(3/2,(4(q1*q1) + epsilon));
y1 = y[i] + k1*(deltaT/2);

k2= y[i]*-2*q1 /  pwd(3/2,(4(q1*q1) + epsilon))*y1;
y2= y[i] + k2*(deltaT/2);

k3= y[i]*-2*q1 /  pwd(3/2,(4(q1*q1) + epsilon));
y3=y[i] + k3*deltaT;

k4= y[i]*-2*q1 /  pwd(3/2,(4(q1*q1) + epsilon))*y3;

y[i+1]= y[i] + (k1+2*k2+2*k3+k4) * deltaT/6 ;


} 


