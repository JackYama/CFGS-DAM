#include <stdio.h>
#include <stdlib.h>
//imprimir los primeros 10 numeros impares
int main() {
    int i;

    for(i = 1; i <= 10; i++) { // Recorremos todos los números del 1 al ii
        if (i % 2 != 0) { // Verificamos si es divisible entre 2 y si no es imprime los numeros que cumplan la condición
        printf("%d\n",i);    
	}
    }

    return 0;
}
