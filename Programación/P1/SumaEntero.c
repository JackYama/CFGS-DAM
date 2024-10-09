#include <stdio.h>
#include <stdlib.h>
int main(){
	int suma,resta, multi ,ent1, ent2;
	float div;
	printf("introduce un entero:\n");
	scanf("%d",&ent2);
	printf("introduce un entero:\n");
	 scanf("%d",&ent1);

		suma=ent1 + ent2;
		resta=ent1 + ent2;
		multi= ent1 * ent2;
		div= ent1 / ent2;
	
	int resultado_suma = suma;
	int resultado_resta = resta;
	int resultado_multi = multi;
	float resultado_div =div;

	printf("El resultado de la suma es%d\n", resultado_suma);
	  printf("El resultado de la resta es%d\n", resultado_resta);
	    printf("El resultado de la multiplicación es%d\n", resultado_multi);
	      printf("El resultado de la división es%f\n", resultado_div);

            return 0;
}
