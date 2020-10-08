//Imprime as N primeiras letras de uma palavra digitada pelo usuário
#include <stdio.h>

int main(){
	
	int i, n;
	char palavra[16]; //palavra de até 15 caracteres e encerramento da string = palavra[16]
	
	printf("Digite uma palavra de ate 15 caracteres:\n");
	scanf("%s",&palavra); //como é apenas uma palavra, pode-se usar o scanf ao inves do gets
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n);
	
	if(n==15){
		printf("%s",palavra); //se o número for igual a 15, o programa irá imprimir a palavra inteira
	}else {
		for(i=0;i<n;i++){
			printf("%c",palavra[i]); //senao, o programa irá imprimir apenas até ao caractere referente ao numero que o usuário digitou
		}
	}
	
	return 0;
}
