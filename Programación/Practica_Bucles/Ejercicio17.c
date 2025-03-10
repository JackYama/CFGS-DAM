#include <stdio.h>
//Contar cuántas veces aparece un dígito en un número
int main() {
    long numero;
    int digito, contador = 0;
    
    printf("Ingrese un número: ");
    scanf("%ld", &numero);
    
    printf("Ingrese el dígito a contar: ");
    scanf("%d", &digito);
    
    // Si el número es negativo, se toma el valor absoluto
    if (numero < 0)
        numero = -numero;
    
    while (numero > 0) {
        if (numero % 10 == digito)
            contador++;
        numero /= 10;
    }
    
    printf("El dígito %d aparece %d veces.\n", digito, contador);
    
    return 0;
}
