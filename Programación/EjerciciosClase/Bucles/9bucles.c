#include <stdio.h>
#include <stdlib.h>
int main(){
	int Fibonacci, a=0,b=1;
	for (int i=1; i<=10;i++){
		printf("%d",a);
		Fibonacci=a+b;
		a=b;
		b=Fibonacci;
	}

}
// La logica de este ejercicio seria
// F=0+1
// a=1
// b=0+1
// por lo que:
// F=1+1
// a=1
// b=1+1
// -----------
// resultado:
// F=1+(1+1)
// a=2
// b=3 
// (asi seria todo el rato en bucle)
