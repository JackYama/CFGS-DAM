#include <stdio.h>
#include <stdlib.h>
int main(){
	        float numero1, numero2, res;
		        char operador;
			        printf("Introduzca el primer numero:");
				scanf("%f",&numero1);
				printf("Introduzca el segundo numero:");
				scanf("%f",&numero2);
				printf("A continuación ingrese un operador(+,-,*,/):");
				scanf("%c",&operador);
				scanf("%c",&operador);
				        switch(operador){

						                case '+':

									                float suma = numero1 + numero2;
											                printf("el resultado de la suma seria:%f\n",suma);
													break;
													                case '-':
													                float resta = numero1 - numero2;
															                 printf("el resultado de la resta seria:%f\n",resta);
																	 break;
																	                 case '*':
																	     float multi = numero1 * numero2;
																	                     printf("el resultado de la multiplicación seria:%f\n",multi);                                    break;
																			                     case '/':                                                                                        float divi = numero1 / numero2;
																																	      printf("el resultado de la división seria:%f\n",divi);
																																	      break;
																																	                                                                                                                               default: printf("el operador no es válido\n");
																																																		        }
					return 0;
}
