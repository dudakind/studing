//le uma string e diz se é palíndroma
#include <stdio.h>
#include <string.h> //para o uso da função gets() e strlen ()
#include <ctype.h> //para o uso de toupper ()

int main(){
	int i, n, inc=0, inc2, valor;
	char frase[101], aux[101], aux2[101];
	
	printf("Digite uma frase de ate 100 caracteres:\n");
	gets(frase);
	
	n = strlen(frase); //atribui a n o número de caracteres de nome
	
	//coloca a frase ao contrário e maiúsculo
	for (i=(n-1); i>=0; i--){ //para i de (n de caracteres de nome-1) até i>=0 passo -1 faça
	
		if (frase[i]!=040){ //se frase[i] for diferente de (espaço)
		
			aux[inc] = toupper(frase[i]); // aux[0]= frase[i] maiúscula
			aux[inc+1] ='\0'; //aux[inc+1] vai receber o \0
			inc = inc + 1; //atualiza o inc
		}	
	}
	//coloca a frase em maiúsculo					
	for(i=0;i<n;i++){
		
		
		if (frase[i]!=040){ 
			
			aux2[inc2] = toupper(frase[i]); 
			aux2[inc2+1] ='\0';
			inc2 = inc2 + 1;
		}
	}
	
	valor= strcmp(aux,aux2); //comparação das strings aux e aux2
	
	if (valor==0){ //se elas forem iguais
		printf("PALINDROMA");
	}else { //se elas forem diferentes
		printf("NAO PALIDROMA");
	}
	return 0;
}
