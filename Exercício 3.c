//le o nome do usuário e o imprime na vertical, em forma de escada, usando apenas letras maiúsculas.
#include <stdio.h>
#include <ctype.h> //para usar a função toupper

int main(){
	
	char nome[20], aux[20]; //variavel do nome e variável auxiliar, ou seja, a variavel que será inserida pelo usuário e a que ele vai receber
	int i;
	
	printf("Digite um nome:\n");
	scanf("%s", nome); //como é apenas uma palavra, pode-se usar o scanf ao inves do gets
	
	for(i=0;nome[i]!='\0';i++){  //verifica todos os caracteres do nome
	
		aux[i]=toupper(nome[i]); //aux recebe os caracteres de nome maiúsculos
		aux[i+1]='\0'; //acrescenta mais um caracter a palavra
		
		printf("%s\n",aux);	//mostra a aux na tela
	}
	
	return 0;	
}
