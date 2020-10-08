#include <stdio.h>
#include <string.h>
int main () {
	char frase[101], l1, l2;
	int i;
	printf ("escreva uma frase de ate 100 caracteres: ");
	gets (frase);
	printf ("Digite a letra que voce quer que seja substituida e a letra que vai substitui-la: ");
	scanf ("%c %c", &l1, &l2);
	for (i=0;frase[i]!='101'; i++) {
		if (frase[i]==l1) {
		l1 = l2;
		}
	}
	printf ("%s", frase);
	return 0;
}
