#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	        float monto;
		        float ResultadoMonto;
			        char rol;

				        printf("introduce el monto: ");
					        scanf("%f",&monto);
						        printf("introduce tu rol:\n");
							        scanf("%c",&rol);
								        scanf("%c",&rol);


									        if(rol == 'e'){
											                ResultadoMonto=monto - (monto * 0.15);
													                printf("El monto final es %.2f\n",ResultadoMonto);
															        }
										        else if(rol == 'p'){
												         ResultadoMonto=monto - (monto * 0.1);
													          printf("El monto final es %.2f\n",ResultadoMonto);
														          }
											        else{ printf("No tiene descuento, el monto final es %.f\n",monto);
													        }
}

