#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[100];
	printf("introduce una palabra:");
	scanf("%s", str1);

	printf("que posición quieres modificar: ");
	int pos; 
	scanf(" %i", &pos);
	
	printf("Que caracter desea poner: ");
	char a;
	scanf(" %c", &a);
	
	str1[pos]= a;
	printf("la nueva palabra es: %s \n",str1);
	
	return EXIT_SUCCESS;

}
