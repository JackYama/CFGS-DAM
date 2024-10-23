#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("introduzca la longitud que quiera darle al lado de su cuadrado");
	scanf("%d",&n);
		for(int i=0; i<=n;i++){//FILAS
				       //esto sirve para que imprima desde 0 hasta el numero que indice el cliente con el ni
		for (int j=0;j<n; j++){//COLUMNAS
				       //este segundo bucle es para imprimir las colmnas
			printf("*");
		}
		printf("\n");
		}
}
