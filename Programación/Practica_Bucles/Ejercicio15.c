#include <stdio.h>
//Imprimir la secuencia de números de Fibonacci hasta un número específico
int main() {
    int limite;
    printf("Ingrese el número límite: ");
    scanf("%d", &limite);
    
    int a = 0, b = 1, c;
    printf("%d ", a);
    
    if (limite >= 1)
        printf("%d ", b);
    
    while (1) {
        c = a + b;
        if (c > limite)
            break;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    printf("\n");
    return 0;
}
