#include <stdio.h>
// Imprimir los primeros N números primos.
int esPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, num = 2, contador = 0;

    printf("Ingrese cuántos números primos desea: ");
    scanf("%d", &N);

    while (contador < N) {
        if (esPrimo(num)) {
            printf("%d ", num);
            contador++;
        }
        num++;
    }

    printf("\n");
    return 0;
}

