//while 
#include<stdio.h>
int cont=0,mult,tabla;
main(){
	printf("Dame la tabla que quieres");
	scanf("%d",&tabla);
	while(++cont<=10)
	printf("%d*%d=%d\n",tabla,cont,tabla*cont);
}
