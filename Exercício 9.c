/*le um número indeterminado de dados de uma corrida e imprime os dados do primeiro e do último colocado,
ou seja o menor e o maior tempo de corrida.*/
#include <stdio.h>
#include <string.h>

int main () {

	char nome[30], nmenor[30], nmaior[30];
	int num=-99, numaior=0, numenor=0;
	float t, tmaior=0, tmenor=9999;
	
	printf ("Dados (insira 0 para parar)\n");
		
		printf ("Numero: ");
		scanf ("%d", &num);
	
	while (num!=0) {
		printf ("Nome: ");
		fflush(stdin);
		gets (nome);
		
		printf ("Tempo: ");
		scanf ("%f", &t);
		
		if (t<tmenor) {
			tmenor=t;
			numenor=num;
			strcpy(nmenor, nome);
			
		} 
		if (t>tmaior) {
			tmaior=t;
			numaior=num;
			strcpy(nmaior, nome);
		}	
		
		printf ("\n\nNumero: ");
		scanf ("%d", &num);
	}
	
	printf ("Primeiro:\n%d\n", numenor);
	puts (nmenor);
	printf ("%.1f segundos", tmenor);
	
	printf ("\n\nUltimo:\n%d\n", numaior);
	puts (nmaior);
	printf ("%.1f segundos", tmaior);
	
	return 0;
}
