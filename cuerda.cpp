#include <iostream>
#include <cmath>
using namespace std;
//constantes y variables dadas por el problema
int T = 40; 
int rho = 10
double c = sqrt(T/rho);
int L= 100; 
int t0=0;
int tf = 200; 
int dx = 1; 
int N=200; 
double dt = double(tf-t0)/N;
int i; 
int j;

//funcion para el planteamiento de las condiciones iniciales 

void CI(float Matriz[N][L]){

for(int i = 0 ; i<N; i++){
	for(int j= 0 ; j < L ; j++){
		Matriz[i][j] = 0;
                                   }

			 }

for (int j = 0 ; j<L ;j++){
	if(j<0.8*L){
	Matriz[0][j]= 1.25 * double(j)/L;
                   }
	else{
		Matriz[0][k]= 5-5*double(j)/L;
	    }
                           }

}

int main(){
//matriz
float M[N][L];
//asignacion de las condiciones iniciales a la matriz como parametro
CI(M[N][L]);
//calculo de delta de tiempo
int t = t0 + dt;
int x;
//recorrido para el cambio en el x y en el tiempo de las ecuaciones diferenciales  
for(x = 1 ; x<L-1; x++){

	M[t][x] = (dt*dt/(dx*dx*c*c))*(M[t-1][x+1] - 2*M[t-1][x] + M[t-1][x-1]) + 2*M[t-1][x] - M[t-1][x];

}

for(t = t0 + 2*dt ; t<N; t++){
	for(x=1; x<L-1 ; x++){
		M[t][x] = (dt*dt/(dx*dx*c*c))*(M[t-1][x+1] - 2*M[t-1][x] + M[t-1][x-1]) + 2*M[t-1][x] - M[t-2][x];
}

}


return 0;
}
