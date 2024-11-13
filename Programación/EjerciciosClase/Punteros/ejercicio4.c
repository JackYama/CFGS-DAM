#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void intercambiar (int *n1, int *n2, int n3){
 	*n1=*n2
	*n2=*n1
	*n3=n1
 }
int main (){
	int n1=10; 
	int n2 =5;

	intercambiar(&n1,&n2);
	
	printf("%d\n",n1); //imprime 10
	printf("%d\n",n2); //imprime 5
	
	return 0;	
}
  
