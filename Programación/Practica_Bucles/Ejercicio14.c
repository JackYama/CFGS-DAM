#include <stdio.h>
//Imprimir los múltiplos de un número dado hasta un límite
int main() {
    int num, limite;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);
    
    printf("Ingrese el límite: ");
    scanf("%d", &limite);
    
    for (int i = 1; num * i <= limite; i++) {
        printf("%d ", num * i);
    }
    
    printf("\n");
    return 0;
}
