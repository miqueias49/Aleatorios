#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_BOMBAS 
{
	int vps;
	int end_linked;
	unsigned int stat:1;
	unsigned int :4;
};
typedef struct st_BOMBAS BOMBAS;


void monitoramento(BOMBAS bomb)
{
	if(bomb.stat == 1)
	{
		printf("ligado\n");
	}else 
	if (bomb.stat == 0) 
	{	
		printf("desligado\n");
	}
}


int main( int argc, char** argv )
{	

	BOMBAS bomb_a;
	bomb_a.stat = 0;

	while (1) 
	{	
		system("clear");
		monitoramento(bomb_a);
		
	}// fim do while 


	return 0;
}// fim da função main 
