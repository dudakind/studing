//le o nome do usu�rio e o imprime na vertical, em forma de escada, usando apenas letras mai�sculas.
#include <stdio.h>
#include <ctype.h> //para usar a fun��o toupper

int main(){
	
	char nome[20], aux[20]; //variavel do nome e vari�vel auxiliar, ou seja, a variavel que ser� inserida pelo usu�rio e a que ele vai receber
	int i;
	
	printf("Digite um nome:\n");
	scanf("%s", nome); //como � apenas uma palavra, pode-se usar o scanf ao inves do gets
	
	for(i=0;nome[i]!='\0';i++){  //verifica todos os caracteres do nome
	
		aux[i]=toupper(nome[i]); //aux recebe os caracteres de nome mai�sculos
		aux[i+1]='\0'; //acrescenta mais um caracter a palavra
		
		printf("%s\n",aux);	//mostra a aux na tela
	}
	
	return 0;	
}
