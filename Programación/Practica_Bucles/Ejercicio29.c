#include <stdio.h>
//Buscar si un número está presente en un array de enteros
int main() {
    int n, busqueda, encontrado = 0;
    
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Ingrese el número a buscar: ");
    scanf("%d", &busqueda);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == busqueda) {
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado)
        printf("El número %d está presente en el array.\n", busqueda);
    else
        printf("El número %d no está presente en el array.\n", busqueda);
    
    return 0;
}
