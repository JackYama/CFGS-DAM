#include <stdio.h>
#include <string.h>
#define MAX_CAD 100
//Ordenar una lista de cadenas en orden alfabético
int main() {
    int n;
    printf("Ingrese el número de cadenas: ");
    scanf("%d", &n);
    
    char cadenas[n][MAX_CAD];
    
    printf("Ingrese las cadenas:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", cadenas[i]);
    }
    
    // Ordenamiento burbuja
    char temp[MAX_CAD];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cadenas[i], cadenas[j]) > 0) {
                strcpy(temp, cadenas[i]);
                strcpy(cadenas[i], cadenas[j]);
                strcpy(cadenas[j], temp);
            }
        }
    }
    
    printf("Cadenas ordenadas alfabéticamente:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cadenas[i]);
    }
    
    return 0;
}
