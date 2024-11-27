#include <stdio.h>
#include <stdlib.h>
int main(){
	int r;

	//while (1) significa que no va a parar de ejecutarse
		//srand(10);el 10 es la semilla que indica donde empieza
		srand(time(NULL));//la función time hace que cambie cada segundo
		//srand(getpid());//Identificador del proceso 
		
		for(int i = 0;i<4;i++){
			//srand(10);esto provocaria que se calculara siempre el mismo número aleatorio
			r=(rand() %5)+1;//esto sirve para hacer el valor entre 1 y 5//random o aleatorio
					//rand()%5 genera aleatorio entre 0 y 4 incluidos al sumar , consigo numeros aleatorios entre 1 y 5
			    //hacer modulo 8 da números aleatorios entre 0 y 7
		printf("%lf\n",r)
	}
}
//cosas para exame 
//Contruir una función que calcule un número aleatorio entre dos valores dados como argumento.
//
