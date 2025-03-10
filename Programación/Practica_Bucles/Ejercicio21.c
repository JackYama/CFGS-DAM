#include <stdio.h>
#include <string.h>
//Determinar cuántas veces aparece una palabra en un texto
int main() {
    char texto[1000];
    char palabra[100];
    int contador = 0;
    char *pos;

    printf("Ingrese el texto:\n");
    fgets(texto, 1000, stdin);

    printf("Ingrese la palabra a buscar: ");
    scanf("%s", palabra);
    
    pos = texto;
    while ((pos = strstr(pos, palabra)) != NULL) {
        contador++;
        pos += strlen(palabra);  // Avanza la posición para evitar contar la misma ocurrencia
    }
    
    printf("La palabra '%s' aparece %d veces en el texto.\n", palabra, contador);
    
    return 0;
}
