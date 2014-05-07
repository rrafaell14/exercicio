#include <stdio.h> 
#include <stdlib.h>
#include <tchar.h> 

int main() 
{ 
float ph,h,pm;
int s; 

printf("\nDigite a altura:\n"); 
scanf("%f",&h);

printf("\nDigite 1 para masculino 2 para feminino:\n"); 
scanf("%d",&s); 

ph =(72.7*h)- 58;
pm =(62.1*h)- 44.7;

if (s==1)
{

printf("\n O peso ideal homen :%f\n", ph); 
}

if (s==2)
{

printf("\n O peso ideal mulher :%f\n", pm);
}

system("PAUSE");	
return 0; 
}
