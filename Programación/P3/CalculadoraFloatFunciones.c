#include <stdio.h>     
#include <stdlib.h>                                                                                     
float suma(float a, float b){
 float resultado_suma = a +b;
 printf("El resultado de la suma es%f\n", resultado_suma);
 return resultado_suma;
 }
float resta(float a, float b){
	float resultado_resta = a - b;
	printf("El resultado de la resta es%f\n", resultado_resta);
	return resultado_resta;
}
float multi(float a, float b){
	float resultado_multi = a * b;
	printf("El resultado de la multiplicación es%f\n", resultado_multi);
	return resultado_multi;
}
float divi(float a,float b){
	float resultado_divi = a / b;
        printf("El resultado de la división es%f\n", resultado_divi);
	return resultado_divi;
}
int main (){
	float ent1,ent2;
printf("introduce un entero:\n");
scanf("%f",&ent1);
printf("introduce un entero:\n");
scanf("%f",&ent2);						

suma(ent1,ent2);
resta(ent1,ent2);
multi(ent1,ent2);
divi(ent1,ent2);
return 0;
}
