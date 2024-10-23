#include <stdio.h>
#include <stdlib.h>
//23.10.2024
//Author:Jacob Navarro Llamazares
//Ej5 bucles

int main(){
int factorial=1;
	int n;
	printf("Introduzca un numero para calcular el factorial: ");
	scanf("%d",&n);

	for(int i=n; i>0;i--){ //i=n para que empieze en el numero que introduce el cliente el cual cogemos con el scanf
			       //ponemos i>0 ya que si pones == 0 es decir hasta donde quiere que acabe pero con el i>0 abrimos la condicion de cualquier numero mayor que 0 acaba en 1
		 factorial *=i;
	}
	printf("El resultado de el numero %d factorial es  %d\n",n,factorial);// el primer porcentaje d es para coger el numero que hemos introducido mientras que el segundo es para imprimir el n por eso al terminar llamamos tanto a factorial como n
}
