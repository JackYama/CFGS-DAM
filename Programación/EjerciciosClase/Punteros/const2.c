#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 20;
    const int *ptr = &numero;  // El valor apuntado es constante

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);

    //Vamos a trampear
    ptr =&trampa
    printf("Nuevo valor:%d\n",*ptr);
    
    return 0;
}