#include <stdio.h>
#include <stdlib.h>
int main(){
	        printf("introduzca su edad: ");
		                int edad;
				                scanf("%d",&edad);
						                if(edad <= 11){
									                        printf("Eres un niño\n");
								} else if(edad >=12 && edad <= 17){
									        printf("Eres un adolescente\n");
								}  else if(edad >=18 && edad <= 64){
									                printf("Eres un adulto\n");
								}
								 else{ printf("Eres Mayor\n");
									  }
}
