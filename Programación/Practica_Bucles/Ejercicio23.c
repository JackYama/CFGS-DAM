#include <stdio.h>
#include <string.h>
//Función que verifique si una cadena es un palíndromo
int esPalindromo(char *cadena) {
    int i = 0, j = strlen(cadena) - 1;
    while (i < j) {
        if (cadena[i] != cadena[j])
            return 0;  // No es palíndromo
        i++;
        j--;
    }
    return 1;  // Es palíndromo
}

int main() {
    char cadena[100];
    
    printf("Ingrese una cadena: ");
    scanf("%s", cadena);  // Lee una sola palabra
    
    if (esPalindromo(cadena))
        printf("La cadena es un palíndromo.\n");
    else
        printf("La cadena no es un palíndromo.\n");
    
    return 0;
}
