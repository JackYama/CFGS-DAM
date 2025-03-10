#include <stdio.h>
//Imprimir el menor y mayor número de un conjunto de números introducidos
int main() {
    int n;
    
    printf("¿Cuántos números desea ingresar? ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Cantidad de números inválida.\n");
        return 1;
    }
    
    int numero, menor, mayor;
    
    // Lectura del primer número para inicializar
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    menor = mayor = numero;
    
    for (int i = 1; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        
        if (numero < menor)
            menor = numero;
        if (numero > mayor)
            mayor = numero;
    }
    
    printf("El número menor es: %d\n", menor);
    printf("El número mayor es: %d\n", mayor);
    
    return 0;
}
