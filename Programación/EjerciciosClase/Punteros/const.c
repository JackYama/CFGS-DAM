#include <stdio.h>
int main() {
    const int LIMITE = 100;  //Definir una constante

    printf("El valor de LIMITE es: %d\n", LIMITE);

     LIMITE = 200;   Esto daría un error porque LIMITE es constante

    return 0;
}