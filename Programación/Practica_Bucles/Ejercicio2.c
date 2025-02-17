#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for(i = 1; i <= 20; i++) { // Recorremos todos los números del 1 al 20
        if (i % 2 == 0) { // Verificamos si es divisible entre 2 y si es imprime los numeros que cumplan la condición
            if (i < 20) {
                printf("%d, ", i);//resto de numeros van con una coma
            } else {
                printf("%d.", i); // Último número termina en punto
            }
        }
    }

    return 0;
}

