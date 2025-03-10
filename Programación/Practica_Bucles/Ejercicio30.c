#include <stdio.h>
//Contar la cantidad de vocales en una cadena
int main() {
    char cadena[100];
    int contador = 0;
    
    printf("Ingrese una cadena: ");
    fgets(cadena, 100, stdin);
    
    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = cadena[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U')
            contador++;
    }
    
    printf("La cantidad de vocales en la cadena es: %d\n", contador);
    
    return 0;
}
