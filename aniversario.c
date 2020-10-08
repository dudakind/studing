#include"aniversario.h"
#include<stdio.h>
void lerA(){
	FILE *arq;
	arq = fopen("aniversario.txt", "r");
	
	infoA p;
	
	fscanf(arq,"%s", &p.nome);
	fscanf(arq,"%d", &p.num);
	fscanf(arq,"%d", &p.d);
	fscanf(arq,"%d", &p.m);
	fscanf(arq,"%d", &p.a);
		
}

void imprimirA(){
	FILE *arq;
	arq = fopen("aniversario.txt", "r");
	
	infoA p;
	
	printf("Digite o nome do arquivo:\n");
	fprintf(arq, "%s", p.nome);
	fprintf(arq,"%d", p.num);
	fprintf(arq, "%d", p.d);
	fprintf(arq, "%d", p.m);
	fprintf(arq, "%d", p.a);
	
}

