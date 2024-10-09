#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int CalcularRaiz(){
	double raiz;
	int valor;

	  printf("Introduzca un número para calcular su raíz "); 
		       scanf("%d",&valor);					                                                          raiz = sqrt(valor);        
        printf("El resultado es %d es:%lf\n",valor,raiz);
	 return 0;//como todo ha ido bien, devuelvo un 0
	}
	        
	int CalcularArea (){
		double radio; 
	        double area;
	
	  printf("Introduzca un número para calcular el area "); 
		       scanf("%lf",&radio);                                                  
	area= radio * radio * M_PI; //M_PI esta definido en math.h
        printf("El area es %lf\n",area);
	 return 0;
	}
				        
int main(){
	CalcularRaiz();
	CalcularArea();
	return 0;
}
