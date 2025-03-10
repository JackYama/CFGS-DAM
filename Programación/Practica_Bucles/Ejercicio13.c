#include <stdio.h>
//Imprimir la serie de Fibonacci hasta el N-ésimo número
int main() {
    int N;
    printf("Ingrese la cantidad de términos de la serie Fibonacci: ");
    scanf("%d", &N);
    
    int a = 0, b = 1, c;
    
    if (N >= 1)
        printf("%d ", a);
    if (N >= 2)
        printf("%d ", b);
    
    for (int i = 3; i <= N; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    printf("\n");
    return 0;
}

