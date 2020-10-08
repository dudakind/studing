#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	char frase[200], aux [200];
	int i;
	
	printf ("Digite uma frase:\n");
	gets (frase);
	
	for (i=0; frase[i]!='\0';i++) {
		aux[i]=toupper(frase[i]);
		aux[200]=i+3;
	}
	printf ("%s", aux);
	return 0;
}
