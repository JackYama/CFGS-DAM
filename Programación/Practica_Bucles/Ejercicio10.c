#include <stdio.h>
//calcular el factorial de un número
int main() {
    int n, i, factorial = 1;
    
    printf("Ingrese un número: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    
    printf("El factorial de %d es %d\n", n, factorial);
    return 0;
}

