#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
float h,t; 

printf("\nDigite o lado do quadrado:\n"); 
scanf("%f",&h);

t=h*h;

printf("\n A area do quadrado e:%.2f\n", t);
 printf("\n O dobro da area do quadrado e:%.2f\n", 2*t);

system("PAUSE");	
return 0; 
}
