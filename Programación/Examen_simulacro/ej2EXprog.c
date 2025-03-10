#include <stdio.h>
#include <stdlib.h>

int modificarElemento(int valor);

int modificarPorReferencia(int *valor);

int main(){
	
	int n;
	printf("introduce el tamaño: ");
	scanf("%d", &n);

	int * array = (int *) malloc (n * sizeof(int));

	if (array == NULL){
		printf("error al reservar memoria");
		free(array);
	}

	for(int i = 0; i < n; i++){
		printf("posición %d: ", i);
		scanf("%d", &array[i]);
	}

	printf("\n");

	int valor = array[n-1];

	modificarElemento(valor);
	printf("Paso por valor: %d\n", valor);

	modificarPorReferencia(&valor);
	printf("Paso por referencia: %d\n", valor);

	free(array);
	return(0);

}

int modificarElemento(int valor){  //por valor crea una copia, es decir que por mucho que la cambies, la original va a seguir siendo la misma.
	valor += 10;
}

int modificarPorReferencia(int *valor){  //por referencia accede directamente al valor original y lo cambia para siempre o hasta que le vuelvas a pasar otro valor por referencia.
	*valor += 10;
}

//si el valor es 3 por ejemplo, al pasarlo por valor solo se modifica dentro de la función pero valor original sigue siendo 3.
//al pasarlo por referencia modifica el valor original y al imprimirlo sale el nuevo valor modificado que en este caso seria 13. 

/*double arr[n];
	for(int i = 0; i < n; i++){
		printf("posición %d: ", i);
		scanf("%lf", &arr[i]);
	}
	int tam = sizeof(arr);
	printf("%d", tam); */

//cada elemento ocupa 8 bits.