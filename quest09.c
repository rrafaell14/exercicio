#include <stdio.h>
#include <stdlib.h>


int main (void)

{
    float metro,centimetro;

    printf ("Digite o valor em metros:\n");
    scanf ("%f", &metro);

    centimetro = metro * 100;
    printf( "Valor correspondente em centimetro: %.f\n",centimetro);

       system("PAUSE");
	  return 0;


}


