#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITEMS 10
typedef struct{
	char nombre[50];
	char dirección[50];
	char telefono[50];
}Proveedor;
typedef struct{
	char nombre[50];
	double precio;
	
	 Proveedor proveedor;

}Articulo;
typedef struct{
	int cantidades [MAX_ITEMS];
	int totalArticulos;
	Articulo articulos[MAX_ITEMS];

}Inventario;
int main(){
	struct Inventario miInventario;
		Articulo articulo =1 {"Nombre",10,{"NonPro","DirPro","telPro"}};
		miInventario.articulos[0] = articulo;
		miInventario.cantidades[0] = 10;

		printf("Nombre articulo %s\n"
				miInventario.articulos[0].nombre;
		);
		printf("Cantidad %d\n",
				miInventario.cantidades[0]
		);
		printf("Nombre del proveedor %s\n"
				miInventario.articulos[0].proveedor.nombre
		);
		return EXIT_SUCCESS
}
