//le o nome do usu�rio e mostra o nome de traz para frente, utilizando somente letras mai�sculas.
#include <stdio.h>
#include <string.h> //para o uso de strlen ()
#include <ctype.h> //para o uso de toupper ()

int main(){
	
	char nome[20];
	int n, i;
	
	printf("Digite seu nome:\n");
	scanf("%s", nome); //como � apenas uma palavra, pode-se usar o scanf ao inves do gets
	
	n=strlen(nome); //atribui a n o n�mero de caracteres de nome
	
	for (i=(n-1);i>=0;i--) { //para i de (n de caracteres de nome-1) at� i>=0 passo -1 fa�a
		
		printf ("%c", toupper(nome[i])); //mostra na tela todos os nome[i] mai�sculos
	}
	
	return 0;
}
