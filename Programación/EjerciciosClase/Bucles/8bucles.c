#include <stdio.h>
#include <stdlib.h>
//23.10.2024
//Author: Jacob Navarro Llamazares
int main(){
	int n;
	printf("Introduce un numero:");
	scanf("%d",&n);

	int contador = 0;//ponemos esto porque nos pide el numero de divisores , por lo que cada vez que haya una divisió y de 0 se le suma 1 al contador
			 //


	for(int i=0; i<=n; i++){
		if(n % i== 0){
			contador++;
		}//coge el numero que hemos puesto y lo divide entre el primer numero del bucle y si el resto da 0 nos suma al contador 0 como antes hemos dicho
}
printf("El numero introducido%d tiene %d divisores.\n", n,contador);
		return 0;
		
		}
