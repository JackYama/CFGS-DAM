#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	 float x = 10;
	     int *p;
	     //este codigo lo que genera es un warning pero compila y hace el cambio
	     p = &x;// con esto se dice que el puntero apunta a la direccion de x, por lo que el valor de p pasa a 10 asi que para imprimir eso se hace con el ultimo print f que es "%p" ,"*p"(esto si quieres saber lo que vale p apuntado)


	printf("Dirección de x: %p\n", &x);
	printf("Valor de p (dirección de x): %p\n", p);
	printf("Valor apuntado por p (contenido de p): %d\n", *p);
	printf("Contenido de x:%d\n",*x)//con esto nos da que el contenido en vez de ser binario pasa a ser entero
	
	
		return 0;
}
