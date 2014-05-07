#include <stdio.h>
#include <stdlib.h>


int main ()
{
	float x,x1,x2,x3,media;

	printf ("informe a primeira nota \n");
	scanf ("%f",&x);
	printf ("informe a segunda nota \n");
	scanf ("%f",&x1);
	printf ("informe a terceira nota \n");
	scanf ("%f",&x2);
	printf ("informe a quarta nota  \n");
	scanf ("%f",&x3);


	printf ("\no media das notas %.2f\n",media=(x+x1+x2+x3)/4);

	 system("PAUSE");
	return 0;
}
