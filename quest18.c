#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
 float peso,pesoex,multa,exc ;

 printf("\ndigite o peso do peixe!:\n");
 scanf("%f",&peso);
 pesoex = (peso-50);
 multa = pesoex *4;
   if (peso<=50) 
   {
   printf ("\n Peso dentro do estabelecido multa = zero \n" );
   }  
      if (peso>50) 
           { 
           printf ("\npeso fora do estabelecido multa =:%.2f\n "  ,multa);
           }
 system("PAUSE");
 return 0 ; 
}
