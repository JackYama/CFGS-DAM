#include <stdio.h>
#include <stdlib.h>
//Calcular la suma de los primeros "n" números
int main(){
int n;
int suma = 0;
	printf("Porfavor introduzca la cantidad de umeros que quiere sumar:\n");
		scanf("%d",&n);
        for(int i=0;i<=n;i++){
        suma+=i;
        }
        printf("La suma de los primeros numeros que has introducido es:%d\n",suma);
        return 0;
}             
