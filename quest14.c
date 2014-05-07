#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
float c, f; 

printf("Digite uma temperatura em celsius:"); 
scanf("%f",&c); 

f = (c * 1,8) + 32 ;

printf("\n A temperatura em farenheit e :%.2f\n", f); 

system("PAUSE");	
return 0; 
}
