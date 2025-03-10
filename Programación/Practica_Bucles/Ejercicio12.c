#include <stdio.h>
//Imprimir la tabla de multiplicar de un número hasta un límite
int main() {
    int num, limite;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);
    
    printf("Ingrese el límite: ");
    scanf("%d", &limite);
    
    for (int i = 1; i <= limite; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
