#include <stdio.h>
#include <stdlib.h>
//saber si un numero es primo o no

int main() {
    int num, i, esPrimo = 1;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (num < 2) {
        esPrimo = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo) {
        printf("%d es primo.\n", num);
    } else {
        printf("%d no es primo.\n", num);
    }

    return 0;
}

