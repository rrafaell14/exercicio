#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
float m,t,v; 


printf("\nDigite o tamanho do arquivo:\n"); 
scanf("%f",&m);
printf("\nDigite a velocidade:\n"); 
scanf("%f",&v);

t=(((m*1000)/(v/8))/60);
printf("\n O tempo estimado do download em minutos  e:%.2f\n", t);


system("PAUSE");	
return 0; 
}
