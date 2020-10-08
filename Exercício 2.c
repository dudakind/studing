/*le uma frase e duas letras L1 e L2. O programa troca todas as ocorrências
da letra L1 pela letra L2 na frase digitada e imprime a nova frase com as trocas realizadas.*/

#include <string.h> //para o uso do gets()
#include <stdio.h> 
int main() {
	char frase[101], l1, l2;
	int i;

	printf ("Digite uma frase: ");
	fflush(stdin); //limpa o buffer do teclado
	gets(frase); //como é uma frase, deve-se usar o gets ao inves do scanf
	
	printf("Digite a letra que sera substituida: ");
	fflush(stdin);
	scanf("%c", &l1); //quando é apenas uma letra, pode-se usar o scanf ao inves do gets
	
	printf("Digite a letra que deseja inserir no lugar:");
	fflush(stdin);
	scanf("%c", &l2);
	
	for(i=0; frase[i]!='\0';i++) { //verifica todos os caracteres da frase
		
		if (frase[i]==l1) { //verifica se o caracter é igual a l1
			frase[i]=l2; //se for, ele muda para l2
			}
		printf("%c", frase[i]); //mostra a frase final
	}
	
	return 0;
}
