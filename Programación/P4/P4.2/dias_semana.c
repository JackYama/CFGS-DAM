#include <stdio.h>
#include <stdlib.h>
int main(){
	        int dia;
		        printf("Introduce un numero que este entre el 1 y 7: ");
			        scanf("%d", &dia);
				        switch (dia){
						                case 1: printf("Lunes\n");
									                        break;
									                case 2: printf("Martes\n");
												                        break;
												                case 3: printf("Miércoles\n");
															                        break;
															                case 4: printf("Jueves\n");
																		                        break;
																		                case 5: printf("Viernes\n");
																					                        break;
																					                case 6: printf("Sábado\n");
																								                        break;
																								                case 7: printf("Domingo\n");
																											                        break;

																											                default: printf("Número Invalido\n");
																														         }
					        return 0;
						        }
