#include <stdio.h>
//Contar cuántos números primos hay entre dos números dados
int esPrimo(int n) {
    int i;
    if (n < 2)
        return 0; // devuelve "falso"
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // No es primo
    }
    return 1; // Es primo
}

int main() {
    int inicio, fin, contador = 0, i;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &inicio);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &fin);
    
    // funcion para asegurarse de que inicio sea menor o igual que fin
    if (inicio > fin) {
        int temp = inicio;
        inicio = fin;
        fin = temp;
    }
    
    for (i = inicio; i <= fin; i++) {
        if (esPrimo(i) == 1)
            contador++;
    }
    
    printf("Hay %d números primos entre %d y %d.\n", contador, inicio, fin);
    
    return 0;
}
