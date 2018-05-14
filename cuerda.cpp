#include <iostream>
#include <cmath>
#include <fstream>
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

void CI1(float Matriz[N][L]){

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

float string_history[N][L];
CI1(string_history[N][L]);
int t = t0 + dt;
int x;
for(x = 1 ; x<L-1; x++){

	string_history[t][x] = (dt*dt/(dx*dx*c*c))*(string_history[t-1][x+1] - 2*string_history[t-1][x] + string_history[t-1][x-1]) + 2*string_history[t-1][x] - string_history[t-1][x];

}

for(t = t0 + 2*dt ; t<N; t++){
	for(x=1; x<L-1 ; x++){
		string_history[t][x] = (dt*dt/(dx*dx*c*c))*(string_history[t-1][x+1] - 2*string_history[t-1][x] + string_history[t-1][x-1]) + 2*string_history[t-1][x] - string_history[t-2][x];
}

}


return 0;
}
