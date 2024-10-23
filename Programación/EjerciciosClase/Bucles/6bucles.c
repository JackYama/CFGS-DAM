#include <stdio.h>
#include <stdlib.h>
int main(){
	int suma=0;
	int num;
	printf("introduzca un numero:");
	scanf("%d",&num);

	for (int i=0;i<=num; i++){ //el <= es porque quiere que llegue hasta el numero que he introducido
		suma += i;
	}
	printf("La suma de todos los numeros es %d\n",suma);
}
