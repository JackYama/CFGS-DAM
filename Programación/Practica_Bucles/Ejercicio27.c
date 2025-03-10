#include <stdio.h>
//Sumar todos los elementos de un array
int main() {
    int n;
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    
    printf("La suma de los elementos es: %d\n", suma);
    
    return 0;
}
