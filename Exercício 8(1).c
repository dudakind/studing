//Jogo da forca
#include <stdio.h>
#include <string.h>

int main () {
	
	char palavra[20], letra;
	int i, tent=5, tamp=1, contL, contC=0; //tent=5 porque o usu�rio tem 5 tentativas
	char aux[tamp]; //tamp

	printf ("Jogador 1, insira a palavra:\n");
	scanf (" %s", &palavra);
	system ("cls");
	tamp=strlen(palavra);
	printf (">>>FORCA<<<\n");
	for (i=0;i<tamp;i++) {
		aux[i]='*';
		printf ("%c", aux[i]);		
	}	
	while ((tent>0) && (contC!=tamp)) {
		
		if (contC==tamp) {
			printf ("Voce venceu ");
		}
		contL=0;
		printf ("\nJogador 2, insira uma letra: ");
		scanf (" %c", &letra);
		for (i=0;palavra[i]!='\0';i++) {		
			if (palavra[i]==letra) {
				aux[i]=letra;
				contL++;
				contC++;
			}
		}
		if (contL==0) {
			tent--;
		}
		printf ("\n %s\nTentativas: %d \n", aux, tent);		
	}
	if (tent<=0) {
		printf ("Voce perdeu");
	} else {
		printf ("Voce venceu ");
	}
	return 0;
}
