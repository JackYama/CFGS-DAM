#include <stdio.h>
//Encontrar el número mínimo de un array
int main() {
    int n;
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minimo = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimo)
            minimo = arr[i];
    }
    
    printf("El número mínimo es: %d\n", minimo);
    
    return 0;
}
