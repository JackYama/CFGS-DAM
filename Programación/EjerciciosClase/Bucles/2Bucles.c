#include <stdio.h>
#include <stdlib.h>
int main(){
	for (int i=1;i<21;i+=2){ //20 vueltas
		if(i%2 ==0){
		printf("%d ", i);
		}
		//segunda solución
	for(int i = 0; i<21; i+=2) //10 vueltas
		if(i<20){
		printf("%d ", i);
	
	}
	//solución tercera y la mas eficiente para este ejercicio
	int i;
	for ( i=0;i<19; i+=2){//10 veces
		printf("%d",i);//10 veces
		}
	//total lineas ejecutadas:10 + bucle 
	//Al salir del bucle, i vale 20.
	printf("%d.",i);
	return EXIT_SUCCESS;
	}
}
