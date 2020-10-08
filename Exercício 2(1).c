#include <string.h>
#include <stdio.h>
int main() {
	char frase[101], l1,l2;
	int i;

	printf ("Digite uma frase: ");
	fflush(stdin);
	gets(frase);
	
	printf("Digite a letra que sera substituida: ");
	fflush(stdin);
	scanf("%c", &l1);
	
	printf("Digite a letra que deseja inserir no lugar:");
	fflush(stdin);
	scanf("%c", &l2);
	
	for(i=0; frase[i]!='\0';i++) {
		
		if (frase[i]=l1) {
			frase[i]=l2;
			}
		printf("%c", frase[i]);
	}
	

return 0;
}
