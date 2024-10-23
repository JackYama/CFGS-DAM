#include <stdio.h>
#include <stdlib.h>
int main(){
	int i = 0;

	for (int i=0; i < 100 ; i = i +2){
		//este bucle esta asi escrito no imprime el 100
		//en la ultima ejecución del bucle i vale 98.
		//por tnto al incrementar i, i vale 100.
		//y, no cumple la condición 
		
		//para imprimir el 100 hay 2 posibilidades:
		// i<= 100

	for (/*valorinicial*/ i = 0 ; i<5/*condicion*/ ; i = i + 1 /*Codigo a ejecutar entre vueltas */){
		printf("%d",i);
	}
	printf("terminado\n");
	return EXIT_SUCCESS;
}
		/**
		 * 1)inicializo i=0
		 * 2)compruebo si i<5.Como se cumple, ejecuto el interior del bucle
		 * 3)printf
		 * 4)Terminando el interior de bucle, ejecuto el "código entre vueltas": i=i+1
		 * 5)Vuelvo al punto 2. Compruebo si i<5. Se cumple porque i==1. Ejecuto el interior.
		 * 6)printf
		 * 7) Terminando el interior del bucle, ejecuto: i=i+º. Ahora i vale 2.
		 * 8) vuelvo a la condición: ¿i<5? Si. Interior del bucle 
		 * 9) printf 
		 * 10) Terminando el interior del bucle, ejecuto i=i+1 . Ahora i vale 3.
		 * 11) Comprobar la condición:¿i<5)Si. Interior del bucle
		 * 12) 13) i vale 4 14) Condición ¿ii<5? Si. interior 
		 * 15) 16) i vale 5. 17) Condición:¿i<5
