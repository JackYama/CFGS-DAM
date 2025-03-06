#include <stdio.h>
#include <stdlib.h>
//Calcular la suma de los números del 1 al 100
int main(){
int n;
int suma = 0;
	for(int i=1;i<=100;i++){
	suma+=i;
	}
	printf("%d",suma);
	return 0;
}
