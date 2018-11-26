#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <time.h>

clock_t tInicio, tFim, tDecorrido;

int num[50000], i, x, v;

int main(){
	
	tInicio = clock();
			
	srand((unsigned)time(NULL));
	for(i=1;i<=1000;i++)
	{						
		num[i] = rand() %10;											
		printf("\n%d",num[i]);
	}
	x = rand() % 10;
	printf("\nValor a ser buscado: %d",x);
														
	v = 0;
																									
	for(i=1;i<=1000;i++)
	{
																										
		if(x == num[i])
		{
			v++;
			printf("\nO Valor X esta na posicao %d.",i);
		}
 	}
	if(v == 0)
	{
		printf("\nO Valor X nao foi encontrado!!!");
	}
												
	tFim = clock();
																																			
	tDecorrido = ((double)(tFim - tInicio));
																																	
	printf("\nTempo Gasto: %lu\n milisegundos", tDecorrido );

	return 0;
}
