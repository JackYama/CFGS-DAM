#include <stdio.h>
#include <stdlib.h>

/* Operadores de asignación son:
 * > mayor
 * < menor
 * <== menor o igual
 * >= mayor o igual
 * == igual
 * !=distinto 
 */
int main(){
	int condicion = 0; // El = es un operador de asignación
		scanf("%d",&condicion); 
	         if (condicion ==0 ){
			// == Es el operado de comparación 
			printf("condicion vale 0\n");
		} else if (condicion == 1){
			printf("condición no vale 1\n");}
	else{
				printf("Condición no vale ni 0 ni 1\n");
			
		}
return EXIT_SUCCESS;
}
