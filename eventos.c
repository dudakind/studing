#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include "eventos.h"
#include "lembrete.hpp"
#include "compromisso.hpp"
#include "aniversario.hpp"

void removeBarraN(char texto[]){
	int indiceUltimoCaractere = strlen(texto) - 1;
	if(texto[indiceUltimoCaractere] == '\n') {
		texto[indiceUltimoCaractere] = '\0';
	}
}

char menuEventos ()
{
	printf ("Qual o tipo de evento voce deseja pesquisar?");
	printf ("\n\t(C)ompromisso");
	printf ("\n\t(A)niversario");
	printf ("\n\t(L)embrete");
	
	char c;
	FILE *arq;
	
	printf ("\nDigite a opcao: ");
	scanf (" %c", &c);
	
	return toupper(c);
}
	
FILE abrirArquivo(char c)
{
	FILE *arq;
	
	switch (c)
	{
		case 'C':
			arq = fopen ("compromissos.txt", "r");
		case 'A':
			arq = fopen ("aniversarios.txt", "r");
		case 'L':
			arq = fopen ("lembretes.txt", "r");
	}
	
	return *arq;
}

void procurarNumero()
{
	int numeroEvento, achei=0;
	FILE *arq, *tmp;
	char lixo[LIXO];
	
	tipo = menuEventos();
	*arq = abrirArquivo(tipo);
	
	if (tipo=='C')
		COMPROMISSO evento;
	if (tipo=='A')
		ANIVERSARIO evento;
	if (tipo=='L')
		LEMBRETE evento;
	
	if(arq == NULL)
	{
		printf("Erro ao abrir o arquivo\n");
		return;
	}
	
	printf("\nDigite o numero do evento: ");
	scanf("%d", &numeroEvento);
	
	if (tipo=='A')
	{
		fgets(evento.nome, sizeof(evento.nome), arq);
		removeBarraN(evento.nome);
	} else {
		fgets(evento.descricao, sizeof(evento.descricao), arq);
		removeBarraN(evento.descricao);
	}
	
	while(num != numeroEvento)
	{		
		if (tipo=='C') {
			fscanf (arq,"%d%d%d%d%d%d%d", &evento.num, &evento.dia, &evento.mes, &evento.horai, &evento.mini, &evento.horaf, &evento.minf);
			fgets (lixo, sizeof(lixo), arq);
		} else if (tipo=='A'){
			fscanf (arq,"%d%d%d", &evento.num, &evento.dia, &evento.mes);
			fgets (lixo, sizeof(lixo), arq);
		} else {
			fscanf (arq,"%d%d%d%d%d%d", &evento.num, &evento.dia, &evento.mes, &evento.ano, &evento.hora, &evento.min);
			fgets (lixo, sizeof(lixo), arq);
		}

		if(num == numeroEvento)
		{
			achei = 1;
			system("cls");
			printf(" \nNumero:%3d\nNome:%-30s\nNota 1:%4.1f\nNota 2:%4.1f\nTotal:%4.1f \n\n",num,nome,n1,n2,total);
		}	
		 
		fgets(nome, sizeof(nome), arq);
		removeBarraN(nome);
	}
	fclose(arq);
	if(achei == 0)	//nao encontrou
		printf("Evento inexistente");	
}
