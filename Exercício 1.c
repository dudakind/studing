//Imprime as N primeiras letras de uma palavra digitada pelo usu�rio
#include <stdio.h>

int main(){
	
	int i, n;
	char palavra[16]; //palavra de at� 15 caracteres e encerramento da string = palavra[16]
	
	printf("Digite uma palavra de ate 15 caracteres:\n");
	scanf("%s",&palavra); //como � apenas uma palavra, pode-se usar o scanf ao inves do gets
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n);
	
	if(n==15){
		printf("%s",palavra); //se o n�mero for igual a 15, o programa ir� imprimir a palavra inteira
	}else {
		for(i=0;i<n;i++){
			printf("%c",palavra[i]); //senao, o programa ir� imprimir apenas at� ao caractere referente ao numero que o usu�rio digitou
		}
	}
	
	return 0;
}
