#include <iostream>
#include <math.h>
using namespace std; 

double a = 1/2*sqrt(2)
double epsilon = 10* pwd(-3)
double q1 = a; 
double q2 = -a; 
double p1 = 0.0; 
double p2 = 0.0; 

double deltaT= 0.0006; 
int t = 3000;

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
	
k1 = -2*y[i];
y1 = y[i] + k1*(deltaT/2);

k2= -2*y1;
y2= y[i] + k2*(deltaT/2);

k3=
y3=y[i] + k3*deltaT;

k4= -2*y3;

y[i+1]= y[i] + (k1+2*k2+2*k3+k4) * deltaT/6 ;


} 

