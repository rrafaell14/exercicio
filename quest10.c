#include <stdio.h> 
#include <stdlib.h> 

#define pi 3.14

int main() 
{ 
float   raio,c;

 printf ("Digite o valor do raio:");
 scanf ("%f", &raio); 

c=pi*(raio*raio); 

printf("\n\t A area do circulo e = %0.2f\n\n",c);
	
system("PAUSE");	
return 0; 
}
