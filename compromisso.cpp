#include "compromisso.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void MenuCompromissos(){
	COMPROMISSO a;
	char op;
	printf("Digite o que voce deseja:\n");
	printf("(C)adastrar\n");
	printf("(E)ditar\n");
	printf("E(X)cluir\n");
	scanf(" %c",&op);
	switch(op){
		case 'E': 
			EditarCompromisso(a);
		break;
		case 'X':
			ExcluirCompromisso(a);
		break;
		case 'C':
			LerCompromisso(a);
			CadastrarCompromisso(a);
			break;
	}
}
void LerCompromisso(COMPROMISSO &a){

	printf("\nLeitura de Compromisso.");
	printf("\nInsira uma descricao para o compromisso: ");
	fflush(stdin);
	gets(a.descricao);
	printf("\nInsira o numero: ");
	scanf("%d", &a.numero);
	ConfereNumeroCompromisso(a);
	printf("\nInsira o dia: ");
	scanf("%d", &a.dia);
	printf("\nInsira o mes: ");
	scanf("%d", &a.mes);
	printf("\nInsira o ano: ");
	scanf("%d", &a.ano);
	printf("\nInsira a hora inicial: ");
	scanf("%d", &a.hora_inicial);
	printf("\nInsira o minuto inicial: ");
	scanf("%d", &a.minuto_inicial);
	printf("\nInsira a hora final: ");
	scanf("%d", &a.hora_final);
	printf("\nInsira o minuto final: ");
	scanf("%d", &a.minuto_final);

}

void CadastrarCompromisso(COMPROMISSO &a){

	COMPROMISSO b;

	FILE *arq;
	
	arq = fopen("compromisso.txt", "a+");
	
	fputs(a.descricao, arq);
	fprintf(arq, "\n%d", a.numero);
	fprintf(arq, " %d", a.dia);
	fprintf(arq, " %d", a.mes);
	fprintf(arq, " %d", a.ano);
	fprintf(arq, " %d", a.hora_inicial);
	fprintf(arq, " %d", a.minuto_inicial);
	fprintf(arq, " %d", a.hora_final);
	fprintf(arq, " %d\n", a.minuto_final);
	
	fclose(arq);
}

void ConfereNumeroCompromisso(COMPROMISSO &a){

	COMPROMISSO b;

	FILE *arq;
	
	arq = fopen("compromisso.txt", "a+");

	fgets(b.descricao, 100, arq);
	fscanf(arq, "%d", &b.numero);
	fscanf(arq, "%d", &b.dia);
	fscanf(arq, "%d", &b.mes);
	fscanf(arq, "%d", &b.ano);
	fscanf(arq, "%d", &b.hora_inicial);
	fscanf(arq, "%d", &b.minuto_inicial);
	fscanf(arq, "%d", &b.hora_final);
	fscanf(arq, "%d", &b.minuto_final);
	while(!feof(arq)){
		if(a.numero == b.numero){
			printf("Numero ja existente, insira outro:\n");
			scanf("%d", &a.numero);
		}
		fgets(b.descricao, 100, arq);
		fscanf(arq, "%d", &b.numero);
		fscanf(arq, "%d", &b.dia);
		fscanf(arq, "%d", &b.mes);
		fscanf(arq, "%d", &b.ano);
		fscanf(arq, "%d", &b.hora_inicial);
		fscanf(arq, "%d", &b.minuto_inicial);
		fscanf(arq, "%d", &b.hora_final);
		fscanf(arq, "%d", &b.minuto_final);
	}
	fclose(arq);
}

void EditarCompromisso(COMPROMISSO &a){

	char lixo[10];
	
	int numero_que_o_usuario_digitou;

	FILE *arq = fopen("compromisso.txt", "r");
	FILE *temp = fopen("dinossauro.txt", "w");
	
	if(arq == NULL){
		printf("O arquivo 1 n foi aberto");
	}
	if(temp == NULL){
		printf("O arquivo 2 n foi aberto");
	}
	printf("Digite o numero do compromisso a ser editado: ");
	scanf("%d", &numero_que_o_usuario_digitou);
	
	fgets(a.descricao, 100, arq);
	RemoveBarraN(a.descricao);
	fscanf(arq, "%d", &a.numero);
	fscanf(arq, "%d", &a.dia);
	fscanf(arq, "%d", &a.mes);
	fscanf(arq, "%d", &a.ano);
	fscanf(arq, "%d", &a.hora_inicial);
	fscanf(arq, "%d", &a.minuto_inicial);
	fscanf(arq, "%d", &a.hora_final);
	fscanf(arq, "%d", &a.minuto_final);
	fgets(lixo, 10, arq);
	
	while(!feof(arq)){
	
		if(a.numero == numero_que_o_usuario_digitou){
			
			LerCompromisso(a);
			
			fputs(a.descricao, temp);
			fprintf(temp, "\n%d", a.numero);
			fprintf(temp, " %d", a.dia);
			fprintf(temp, " %d", a.mes);
			fprintf(temp, " %d", a.ano);
			fprintf(temp, " %d", a.hora_inicial);
			fprintf(temp, " %d", a.minuto_inicial);
			fprintf(temp, " %d", a.hora_final);
			fprintf(temp, " %d\n", a.minuto_final);
			
		}else{
		
			fputs(a.descricao, temp);
			fprintf(temp, "\n%d", a.numero);
			fprintf(temp, " %d", a.dia);
			fprintf(temp, " %d", a.mes);
			fprintf(temp, " %d", a.ano);
			fprintf(temp, " %d", a.hora_inicial);
			fprintf(temp, " %d", a.minuto_inicial);
			fprintf(temp, " %d", a.hora_final);
			fprintf(temp, " %d\n", a.minuto_final);
						
		}
		
		fgets(a.descricao, 100, arq);
		RemoveBarraN(a.descricao); 
		fscanf(arq, "%d", &a.numero);
		fscanf(arq, "%d", &a.dia);
		fscanf(arq, "%d", &a.mes);
		fscanf(arq, "%d", &a.ano);
		fscanf(arq, "%d", &a.hora_inicial);
		fscanf(arq, "%d", &a.minuto_inicial);
		fscanf(arq, "%d", &a.hora_final);
		fscanf(arq, "%d", &a.minuto_final);
		fgets(lixo, 10, arq);
	
	}
	
	fclose(arq);
	fclose(temp);
	
	remove("compromisso.txt");
	rename("dinossauro.txt","compromisso.txt");

}

void ExcluirCompromisso(COMPROMISSO &a){
	char lixo[10];
	
	int numero_que_o_usuario_digitou;

	FILE *arq = fopen("compromisso.txt", "r");
	FILE *temp = fopen("dinossauro.txt", "w");
	
	if(arq == NULL){
		printf("O arquivo 1 n foi aberto");
	}
	if(temp == NULL){
		printf("O arquivo 2 n foi aberto");
	}
	printf("Digite o numero do compromisso a ser excluido: ");
	scanf("%d", &numero_que_o_usuario_digitou);
	
	fgets(a.descricao, 100, arq);
	RemoveBarraN(a.descricao);
	fscanf(arq, "%d", &a.numero);
	fscanf(arq, "%d", &a.dia);
	fscanf(arq, "%d", &a.mes);
	fscanf(arq, "%d", &a.ano);
	fscanf(arq, "%d", &a.hora_inicial);
	fscanf(arq, "%d", &a.minuto_inicial);
	fscanf(arq, "%d", &a.hora_final);
	fscanf(arq, "%d", &a.minuto_final);
	fgets(lixo, 10, arq);
	
	while(!feof(arq)){
	
		if(a.numero == numero_que_o_usuario_digitou){
			
		}else{
		
			fputs(a.descricao, temp);
			fprintf(temp, "\n%d", a.numero);
			fprintf(temp, " %d", a.dia);
			fprintf(temp, " %d", a.mes);
			fprintf(temp, " %d", a.ano);
			fprintf(temp, " %d", a.hora_inicial);
			fprintf(temp, " %d", a.minuto_inicial);
			fprintf(temp, " %d", a.hora_final);
			fprintf(temp, " %d\n", a.minuto_final);
						
		}
		
		fgets(a.descricao, 100, arq);
		RemoveBarraN(a.descricao); 
		fscanf(arq, "%d", &a.numero);
		fscanf(arq, "%d", &a.dia);
		fscanf(arq, "%d", &a.mes);
		fscanf(arq, "%d", &a.ano);
		fscanf(arq, "%d", &a.hora_inicial);
		fscanf(arq, "%d", &a.minuto_inicial);
		fscanf(arq, "%d", &a.hora_final);
		fscanf(arq, "%d", &a.minuto_final);
		fgets(lixo, 10, arq);
	
	}
	
	fclose(arq);
	fclose(temp);
	
	remove("compromisso.txt");
	rename("dinossauro.txt","compromisso.txt");
}

void RemoveBarraN(char texto[]){ //função utilizada para tirar o \n da string depois de utilizar o fgets
	int indiceUltimoCaractere = strlen(texto) - 1;
	if(texto[indiceUltimoCaractere] == '\n') {
		texto[indiceUltimoCaractere] = '\0';
	}
}
