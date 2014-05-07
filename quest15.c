#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,t1,t2,t3;
float r;

printf("Digite um numero inteiro:");
scanf("%d",&a);

printf("Digite outro numero inteiro:");
scanf("%d",&b);

printf("Digite um numero real:");
scanf("%f",&r);


t1=(2*a)*(b/2);
printf("\n (2xA) x (2/B) :%.2d\n", t1);

t2=(3*a)+b;
printf("\n (3xA) + (B) :%.2d\n", t2);

t3=((r*r)*r);
printf("\n Real ao cubo :%.2f\n", t3);

system("PAUSE");
return 0;
}
