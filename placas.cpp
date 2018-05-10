#include <iostream>
#include <math.h>
using namespace std; 



//Constantes
int L = 5 ; 
int l = 2; 
int d = 1; 
int v0 = 100; 
int m; 
int N; 
double h = 0.01; 
//declaracion funciones 
int transf(int i , int j); 
double *init(int x0, int x1, int y0, int y1, double *array);


int main()
{
//variables 
int up;
int down;
int left; 
int rigth; 
int x0; 
int x1; 
int y0; 
int y1; 
int i=1; 
int j=1; 
int n=0; 
int k; 
double average; 

//asignacion de pasos y del tama;o de la matriz
m=L/h;
N= 2*(m*m);
//asignacion de los valores de x y y segun la ubicacion de las placas.   

x0= m/2 - 1/(h*2) - 1; 
x1 = m/2 + 1/(h*2) -1; 
y0 = m/2 - d/(h*2) - 1; 
y1 = m/2 + d/(h*2) - 1; 

// Potencial incial y nuevo potencial. 
double V[m][m]; 
double V_new[m][m];

// inicializar matriz 
for (i=0 ; i<m*m ; i++)
{
	V[i]=0.0;
}
//campos, actual y nuevo. 
V=init(x0,x1,y0,y1,V);
V_new =init(x0,x1,y0,y1,V);

while(n<N)
{

//delimitando con condicionales para establecer el campo.
	for(i=1 ; m-1 ; i++)
	{
		for(j=1 ; j< m-1 ; j++)
		{

			up = transf(i-1,j);
			down = transf(i+1, j); 
			left = transf(i, j-1);
			rigth = transf(i,j+1);
				if(!(j>= x0 && j<= x1 && i==y0) && !(j>= x0 && j<= x1 && i==y1))
				{
					average = (V[up] + V[down] + V[rigth] + V[left])/4;
					V_new[transf(i,j)] = average;
                                }
		}
	}

for(i=1; i<m-1 ; i++)
{
	for(j=1; j< m-1;j++)
	{
		V[transf(i,j)]=V_new[transf(i,j)];

                                       }


}

	n= n +1;
}


for(i=0 ; i<m ; i++)
{
	for(j=0;j<m;j++)
	{
		cout << V[transf(i,j)] << endl;


	}

}

return 0;
}


//definicion de las funciones
int transf(int i , int j)
{
	return i*m + j;

}


double *init(int x0, int x1, int y0, int y1, double *array)
{
	int a;
	for (a=x0; a<=x1 ; a++)
	{
		array[transf(y0,a)]= V0/2;
		array[transf(y1,a)]= -V0/2;
	}	




return array;





}




