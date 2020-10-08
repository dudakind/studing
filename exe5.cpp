#include <stdio.h>
#include <stdlib.h>

void mm (int * v, int tamanho, int *max, int *min)
{
	int i;
	int minimo = 99999999, maximo = -9999999;

	for (i=0; i<tamanho; i++)
	{
		if (v[i] < minimo)
			minimo = v[i];
		if(v[i] > maximo)
			maximo = v[i];
	}

	*min = minimo;
	*max = maximo;
}
	
int main(void)
{
	int i, tamanho, * v, min, max;

	printf(" Digite um numero inteiro para ser o tamanho do vetor: " );
	scanf("%d", &tamanho);

	v = (int *) malloc(tamanho * sizeof(int));

	for(i = 0; i < tamanho; i++)
		v[i] = i * i;
	
	mm(v, tamanho, &max, &min);

	printf("\nMenor valor do vetor: %d", min);
	printf("\nMaior valor do vetor: %d", max);
	printf ("\n\nVetor: \n\n");
	
	for (i=0; i<tamanho; i++)
		printf ("%4d", v[i]);

	return 0;
}
