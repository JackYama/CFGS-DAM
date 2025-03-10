#include <stdio.h>
//Función que cuente el número de caracteres en una cadena
int contarCaracteres(const char *cadena) {
    int contador = 0;
    while (cadena[contador] != '\0') {
        contador++;
    }
    return contador;
}

int main() {
    char cadena[100];
    
    printf("Ingrese una cadena: ");
    fgets(cadena, 100, stdin);
    
    // Eliminar el salto de línea final, si existe
    int len = contarCaracteres(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }
    
    printf("La cadena tiene %d caracteres.\n", contarCaracteres(cadena));
    
    return 0;
}
