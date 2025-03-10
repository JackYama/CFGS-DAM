#include <stdio.h>
//Verificar si un número es perfecto
int main() {
    int num, sum = 0, i;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    for(i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }
    if(sum == num)
        printf("%d es perfecto.\n", num);
    else
        printf("%d no es perfecto.\n", num);
    return 0;
}
