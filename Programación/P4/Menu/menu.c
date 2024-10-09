#include <stdio.h>
#include <stdlib.h>

void es_vocal(char letra){
	printf("introduce una letra:\n ");
	scanf("%c",&letra);
	scanf("%c",&letra);
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra== 'u') {
		printf("La letra es una vocal\n");
	}
	else{
		printf("La letra no es una vocal\n");
	}
}

void calcular_area_figura(){
	printf("Elige una figura para calcular su área (círculo=1, cuadrado=2):");
	int opcion;
	double A_circulo,A_cuadrado,radio,lado;
	scanf("%d",&opcion);
	if(opcion == 1){
		printf("introduce el radio: ");
		scanf("%lf\n",&radio);
		A_circulo=3.1416*radio*radio;
		printf("el area del circulo es%lf\n",A_circulo);
	}
	else if(opcion == 2){
		printf("Introduce la longitud del lado: ");
		scanf("%lf\n",&lado);
		A_cuadrado= lado*lado;
		printf("El área del cuadrado es %lf\n", A_cuadrado);
	}
	else { printf("comando no válido, elige entre 1 y 2\n");
	}
}
double calcular_promedio_tres_num(double num1,double num2, double num3){
	printf("introduce los 3 numeros que quieres:");
	scanf("%lf",&num1);
	scanf("%lf",&num2);
	scanf("%lf",&num3);

	double promedio3 = (num1 + num2 + num3)/3;
	printf("El promedio de los tres valores seria:%lf", promedio3);
	return 0;
}
double calcular_promedio_cuatro_num(double num1,double num2, double num3, double num4){
	printf("introduce los 4 numeros que quieres:");
	scanf("%lf",&num1);
	scanf("%lf",&num2);
	scanf("%lf",&num3);
	scanf("%lf",&num4);
	double promedio4 = (num1 + num2 + num3 + num4)/4;
	printf("El promedio de los cuatro valores seria:%lf", promedio4);
	return 0;
}


void calcular_promedio(){
	int valores;
	double n1,n2,n3,n4;
	printf("¿De cuantos valores quieres hacer el promedio?, ¿ de 3 o 4 valores?");
	scanf("%d",&valores);
	if(valores == 3){
		calcular_promedio_tres_num(n1,n2,n3);
	}
	else if(valores == 4){
		calcular_promedio_cuatro_num(n1, n2, n3, n4);
	}
	else{
		printf("Error,elige un valor entre 3 y 4");
	}
}
void convertir_hora(){
	int hora,hora_final;
	printf("Indique la hora que quiere utilizar:\n");
	scanf("%d",&hora);
	if(hora >= 1 & hora <= 24){
		if(hora >= 13){
			hora_final = hora - 12;
		}
		else{
			hora_final = hora;
		}
		printf("La hora correcta es:%d ",hora_final);
	}
	else{
		printf("La hora introducida no es valida.\n");
	}
}

void es_primo(){
	int num;
	printf("Introduzca un número menor de 10:");
	scanf("%d",&num);
	if (num >= 0 && num <=10){
		else if (num )
	}
	else{
		printf("La hora introducida no se encuentra entre 0 y 10")
	}
int main(){
	int funciones;
	printf("Selecciona una de las opciones:\n");
	printf("1.Verificar si una letra es una vocal.\n");
	printf("2.Calcular el área de una figura (círculo o cuadrado).\n");
	printf("3.Calcular el promedio de 3 o 4 valores:\n");
	printf("4.Convertir hora de 24 a 12:\n");
	scanf("%d",&funciones);
	switch(funciones){
		case 1:
			char letra2;
			es_vocal(letra2);
			break;
		case 2:
			calcular_area_figura();
			break;
		case 3:
			calcular_promedio();
			break;
		case 4:
			convertir_hora();
			break;
		case 5:
	}

	return 0;
}
