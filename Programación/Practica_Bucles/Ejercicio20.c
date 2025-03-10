#include <stdio.h>
//Contar los números positivos y negativos en una lista de enteros
int main() {
    int n, num;
    int positivos = 0, negativos = 0;
    
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &num);
        if (num > 0)
            positivos++;
        else if (num < 0)
            negativos++;
    }
    
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    
    return 0;
}
