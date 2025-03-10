#include <stdio.h>
// Crear un array de "5" elementos e imprimir sus valores
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("Los elementos del array son:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
