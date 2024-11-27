#include <stdio.h>
#include <stdlib.h>
int main(){
	int opcion = 0;// no es necesario incializarla 
		       //porque el primer uso de la variable es de escritura
	do {
		//Codigo a ejecutar
		printf("Introduce una opción:(4 para salir)\n");
		scanf("%d",&opcion);

	}  while(opcion !=4){//"!=" es no sea x numero que digamos//Codigo a ejecutar 
	return EXIT_SUCCESS;
}
// la primera forma era
//
// while (opcion!=4){
// printf("introduce ...)
// scanf("%d",&opcion);
