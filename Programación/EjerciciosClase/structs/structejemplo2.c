#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char marca[50];
	char modelo[50];
	int anio;
	int kilometraje;
}Vehiculo; //si lo pones asi el struct te ahorra tener que ir poniendo struct todo el rato en el main  

int main(){
	   Vehiculo miVehiculo;
//esto se utilizara , ya que queremos guardar  la palabra en marca por lo que si pones eso con un = le dices que guarde en solamente el primer hueco asignado en el char toyota y eso no es posible por eso no se puede ejecutar ya que solo pondiras la t asi que para que imprima palabra a palbara se utiliza el strcpy
	strcpy(miVehiculo.marca , "Toyota");
	strcpy(miVehiculo.modelo , "Corolla");
	miVehiculo.anio = 2021;
	miVehiculo.kilometraje = 15000;
	
	
	printf("Marca: %s\n", miVehiculo.marca);
	printf("Modelo: %s\n", miVehiculo.modelo);
	printf("Año: %d\n", miVehiculo.anio);
	printf("Kilometraje: %d km\n", miVehiculo.kilometraje);

	return 0;
}
