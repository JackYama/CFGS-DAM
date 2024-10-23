#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Introduce un numero:");
	scanf("%d",&num);
	for(int fila =1; fila<=num;fila++){//no rellenaentero el programa ya que aqui indicamos que solo queremos que llene hasta el numero de fila que le indicamos abajo con col ya que "col<=fila", esto lo que hace es que no se rellene simplemente coincidan la fila con las columna, esto lo que hace es que no se rellene simplemente coincidan la fila con las columnas 
		for(int col=1;col<=fila;col++){
			printf("%d",col);
			}
			printf("\n");
	 	}
		printf("\n");
		return EXIT_SUCCESS;
}
