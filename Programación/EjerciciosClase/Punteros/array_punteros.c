#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr;

	for (int i = 0; i < 5; i++) {
	printf("Elemento %d: %d (en la dirección %p)\n", i, *(p + i),p+i);
			
	}

	// Lo mismo pero con otro tipo de dato.
	long long_arr[5] = {10, 20, 30, 40, 50};
	long *long_p = long_arr;
	
	for (int i = 0; i < 5; i++) {
	printf("Elemento %d: %ld (en la dirección %p)\n", i, *(long_p + i),long_p+i);
	 						}	
}

