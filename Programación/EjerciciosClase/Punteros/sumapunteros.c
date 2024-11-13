#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int arr[5] = {10, 20, 30, 40, 50};//todos los arrays en si son punteros por eso en el "int  *p" no hay que poner "&"
	int *p = arr;
	int suma_puntero = 0;
	
	for(int i = 0 ; i <5; i++){
         suma_puntero += *(p+i);
	//modo pro de poner la suma_puntero:               suma+= *(p++)

	 //no queremos acceder a la variable p sino a su contenido

	 //asterisco porque queremos acceder al valor de  la operación (p+1)
		
	}

	// Lo mismo pero con otro tipo de dato.
	//long long_arr[5] = {10, 20, 30, 40, 50};
	//long *long_p = long_arr;
	//for (int i = 0; i < 5; i++) {
	//printf("Elemento %d: %ld (en la dirección %p)\n", i, *(long_p + i),long_p+i);
	 						}
