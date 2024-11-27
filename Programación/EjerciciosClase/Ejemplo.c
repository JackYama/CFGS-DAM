#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	float x = 10;
	    int *p;
		p = &x;
	
	printf("Valor de x: %d\n", *x);
	printf("Dirección de x: %p\n", &x);
	printf("Valor de p (dirección de x): %p\n", p);
	printf("Valor apuntado por p (contenido de p): %d\n", *p);

		return 0;
}
