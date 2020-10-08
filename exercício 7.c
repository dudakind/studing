//Codifica uma frase para o código de César
#include <stdio.h>
#include <string.h> //para usar o gets

int main () {
	char frase[201], aux [201]; //precisa da variavel auxiliar para receber a frase final
	int i;
	
	printf ("Digite uma frase (todos caracteres minusculos):\n");
	gets (frase); //como é uma frase, não se pode usar scanf
	
	for (i=0; frase[i]!='\0';i++) { //para todos os caracteres diferentes de \0
		
		if ((frase[i]>=97) && (frase[i]<=122)){ //se frase[i] for uma letra minuscula
		aux[i]=frase[i]-29; //uso da tabela ascii para as letras ficarem maiusculas e deslocarem 3 casas
			
			if ((frase[i]>=120) && (frase[i]<=122)){ //o uso do frase[i]-29 não funciona quando for com o x, o y, e o z e, por isso, usamos o frase[i]-55
			aux[i]=frase[i]-55;
			}
			
		} else { //se não é uma letra, são caracteres como espaço, tab, etc. e eles devem permanecer da forma original
			aux[i]=frase[i];
		}
	}
	
	printf ("%s", aux);
	
	return 0;
}
