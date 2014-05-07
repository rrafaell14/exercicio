#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
float c, f; 

printf("Digite uma temperatura em Farenheit:"); 
scanf("%f",&f); 

c = (5 * (f - 32) ) / 9; 

printf("\n A temperatura em Celsius e :%.2f\n", c); 

system("PAUSE");	
return 0; 
}
