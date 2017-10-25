#include<stdio.h>
#include<math.h>
int a, cont,r;
main()
{
	printf("Ingrese el numero de la potencia que quiere ver: ");
	scanf("%d",&a);
	
	for(cont=0;cont<11;cont++)
	{
		if(a==0&&cont==0)
		{
			printf("%d^%d=MATH ERROR\n",a,cont);
		}
		else
		{
			r=pow(a,cont);
			printf("%d^%d=%d\n",a,cont,r);
		}
	}
}

