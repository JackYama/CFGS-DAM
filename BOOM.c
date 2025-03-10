#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
	int Sus = 0;

	while(true){
		Sus++;

		int * Boom = (int *)malloc(Sus * sizeof(int));

		printf("Sus = %d\n", Sus);
	}
}
