
//[ informacoes do criador e do sistema ]///////////////////////////////////////////
//
// Create by: Miqueias da Silva Miranda
//
// Program: calculadora de fisica
//
// Release:
//
//	v.1 - Iniciado o projeto - 2018-10-27
//
//
////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

struct st_Cultura 
{
	int consumo;
	int vezes;
	int qtd;

	unsigned int status:1;
	unsigned int :3;
	int registro;
	char cultura[20];

};
typedef struct st_Cultura CULT;


int main( int argc, char** argv )
{
	initscr();
	start_color();

	init_pair( 1, COLOR_BLACK, COLOR_RED);
	init_pair( 2, COLOR_BLUE, COLOR_BLACK);

	int a = 2, 
		b = 4, 
		c = 1,
		r1 = 500;
	int tempo = 0;


	char status_txt[10] = {"desligado"};
	int status_bomba = 0;
	
	CULT plantacao[2];

	strcpy(plantacao[0].cultura,"banana");

	bkgd(COLOR_PAIR(2));

	while (1) 
	{
		clear();
		printw("+----------------------------------------------+\n");
		printw("  Volume por Dia:                          \n");
		printw("  Caixa Principal: %d                         \n", r1);
		printw("  Adutora: %s                                 \n", status_txt);
		printw("+----------------------------------------------+\n");
		printw("  %s: %s\n", plantacao[0].cultura ,status_txt);


		
		if (tempo == 24) 
		{
			tempo = 0;
		}

		if (r1 < 50 ) 
		{
			strcpy(status_txt,"ligado");
			status_bomba = 1;
		}

		if (r1 >= 500 ) 
		{
			r1 = 500;
			status_bomba = 0;
			strcpy(status_txt,"desligado");
		}

		if (status_bomba == 1) 
		{
			r1 += 40;
		}

//========================================================================================
		
		

		r1 -= (a*4)/24;
		r1 -= (b*12)/24;
		r1 -= (c*250)/24;

		refresh();
		system("sleep .5");
	}// fim do while 
	
	getch();
	endwin();
	return 0;
}
