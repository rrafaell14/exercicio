#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    int gh, hm,ts,tir,tiss,tsim,sl ; 

printf("\nDigite quanto ganha por hora:\n"); 
scanf("%d",&gh); 

printf("\nDigite as horas trabalhada no mes:\n"); 
scanf("%d",&hm);

ts = (gh*hm) ;
tir = (0.11*ts);
tiss = (0.08*ts);
tsim = (0.05*ts);
sl=ts-tir-tiss-tsim;

printf("\n O total do salario bruto:%d\n", ts);

printf("\n O total pago ao INSS:%d\n", tiss );
printf("\n O total pago ao inposto de renda:%d\n", tir);
printf("\n O total pago ao sindicato:%d\n", tsim );
printf("\n O total salario liquido :%d\n", sl);

system("PAUSE");	
return 0; 
}
