/*
 ============================================================================
 Name        : 1-3.c
 Author      : Vega, Agustín
 Version     :
 Copyright   : Your copyright notice
 Description : ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numUno;
	int numDos;
	int numTres;

	printf("Ingresa un numero: ");
	fflush(stdin);
	scanf("%d", &numUno);

	printf("Ingresa otro numero: ");
	fflush(stdin);
	scanf("%d", &numDos);

	printf("Ingresa un tercer numero: ");
	fflush(stdin);
	scanf("%d", &numTres);

	if(numUno == numDos || numUno == numTres)
	{
		printf("No hay numero del medio");
	}
	else
	{
		if(numDos == numTres)
		{
			printf("No hay numero del medio");
		}
		else
		{
			if((numUno < numDos && numUno > numTres) || (numUno > numDos && numUno < numTres))
			{
				printf("El numero del medio es %d", numUno);
			}
			else
			{
				if((numDos < numTres && numDos > numUno) || (numDos > numTres && numDos < numUno))
				{
					printf("El numero del medio es %d", numDos);
				}
				else
				{
					printf("El numero del medio es %d", numTres);
				}
			}
		}
	}

	return EXIT_SUCCESS;
}
