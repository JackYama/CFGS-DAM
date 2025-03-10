#include <stdio.h>
//Calcular la media de un conjunto de números
int main() {
    int n;
    float suma = 0, numero;
    
    printf("¿Cuántos números desea ingresar? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%f", &numero);
        suma += numero;
    }
    
    printf("La media es: %f\n", suma / n);
    
    return 0;
}
