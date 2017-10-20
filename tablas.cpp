#include <stdio.h>
int a, tabla, mult;
int main(){
printf("Dame el numero de la tabla que quieres");
scanf("%d",& tabla);
for (a=1;a<10;a++)
{

mult=tabla*a;
printf("%d*%d=%d\n",tabla,a,mult);
}


}
