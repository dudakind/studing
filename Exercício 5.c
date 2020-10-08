//Verifica quantas vogais e quantos espa�os tem numa frase.
#include <stdio.h>
#include <string.h> //para o uso da fun��o gets()

int main(){
	
	char frase[201];
	int i, vogais, espaco;
	
	printf("Digite uma frase de ate 200 caracteres:\n");
	gets(frase); //usa-se gets para frases
	
	vogais = 0;
	espaco = 0;
	
	for(i=0; frase[i]!='\0'; i++) {
		//usa a tabela ascii para:
		if ( (frase[i]==97) || (frase[i]==101) || (frase[i]==105) || (frase[i]==111) || (frase[i]==117)) { //se frase [i] for igual a alguma das vogais min�sculas, soma-se +1 � variavel vogal
			vogais=vogais+1;
		}else if((frase[i]==65)||(frase[i]==69)||(frase[i]==73)||(frase[i]==79)||(frase[i]==85)){ //se frase [i] for igual a alguma das vogais mai�sculas, soma-se +1 � variavel vogal
			vogais=vogais+1;
		}else if(frase[i]==040){ //se frase [i] for igual a espa�o, soma-se +1 � variavel espa�o
			espaco=espaco+1;
		}
	}
	printf("Vogais:%d\n", vogais);
	printf("Espaco:%d\n", espaco);	
	return 0;	
}
