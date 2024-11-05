#include <stdio.h>
#include <stdlib.h>
struct fecha {// declara un tipo de dato.
	int mes;
	int dia;
	int anio;
};
struct cuenta{
	int num_cuenta;
	char tipo_cuenta;
	char nombre[80];
	float saldo;
	struct fecha ultimopago;
	//struct fecha ultimopago;
	//esta es otra forma que sustituiria a este ultimo struct
	/**int mes_ultimo pago;
	int dia_ultimo_pago;
	int anio_ultimo_pago;*/
};
int main{
	struct cuenta cliente [100]
		/** declarando "hueco" para 100 cuentas */
		/** Esta forma de inicializar solo es valida en la declaración*/
		struct cuenta usuario={12345,'R',"José",586.30,5,24,1990};
	//num_cuenta tipo_cuenta , nombre , saldo ,fecha.dia,fecha.anio
	printf("Num cuenta:%d\n",usuario.num_cuenta);
	printf("Tipo de cuenta:%c\"", usuario.tipocuenta);
	printf("Día del ultimo pago:%d\n", usuario.ultimopago.dia);

	/**cliente[0].num cuenta=12345
	
	 */
	/**array de clientes*/
	cliente[0].ultimopago.dia =24
	cliente[0].ultimopago.mes =5
	cliente[0].ultimopago.anio =1990
	cliente[0].num_cuenta =12345
	cliente[0].tipo_cuenta ='R'
	//strcpy(cliente[0].nombre."Jose";)//usar strcpy para copiar cadenas en c
	cliente[0].saldo=586.30;

	printf("%d\n",cliente[0].tipo_cuenta);
	// relenamos el segundo cliente por pantalla 
	printf("Introduce el nombre de cuenta:");
	scanf("%d",&cliente[1].numcuenta);
	printf("El numero de cuenta es:%d\n",cliente[1].num_cuenta);
}
