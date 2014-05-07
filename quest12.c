#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
int gh, hm,ts ; 

printf("Digite quanto ganha por hora:"); 
scanf("%d",&gh); 

printf("Digite as horas trabalhada no mes:"); 
scanf("%d",&hm);

ts=gh*hm ; 

printf("\n O total do salario no referido mes:%d\n", ts); 

system("PAUSE");	
return 0; 
}
