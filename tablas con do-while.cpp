//do while
#include <stdio.h>
int tabla,a=1,mult;
main(){
	printf("Dame el numero de la tabla que quieres");
	scanf("%d",&tabla);
	do{
		mult=tabla*a;
	printf("%d*%d=%d\n",tabla,a,mult);	
	a++;
	}while (a<=10);
		
}

