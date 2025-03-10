#include <stdio.h>
#include <stdlib.h>

int fibonacci(n, i);

int main(){
	
	int n;
	printf("introduce el tamaño: ");
	scanf("%d", &n);

	float * array = (float *) malloc (n * sizeof(float));

	if (array == NULL){
		printf("error al reservar memoria");
		free(array);
	}

	for(int i = 0; i < n; i++){
		array[i] = fibonacci(n, i);
	}

	free(array);

}


int fibonacci(n, i){
	int fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	return fibo[i];
}