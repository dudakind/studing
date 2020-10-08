#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int **M;
	int m, n;
	int i, j;

	printf("Digite o numero de linhas: ");
	scanf("%d", &m);

	printf("Digite o numero de colunas: ");
	scanf("%d", &n);

	M = (int **) malloc (m * sizeof (int *));
	
	for (i = 0; i < m; i++)
		M[i] = (int *) malloc (n * sizeof (int));

	printf("\n");

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d ", M[i][j]);
		printf("\n");
	}
	
	return 0;
}
