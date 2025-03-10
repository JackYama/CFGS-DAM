#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float num;
int main(){
    
    printf("Introduzca el tamaño del que quiere que sea su array");
    scanf("%f",&num);

float array[num];

for (int i = 0; i < num; i++){
    printf("introduzca los numeros que quiera");
    array[i]=i/num;
    }
for (int i = 0; i < num; i++){
    printf("%f",array[i]);
    
    }
return 0;

}