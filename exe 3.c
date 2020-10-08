#include <stdio.h>
#define L 3
#define C 4

int main()
{
	int m[L][C], i, j, maior;
	
	printf("Digite os numeros: \n");

	for(i=0; i<L; i++)
		for(j=0; j<C; j++)
			scanf("%d", &m[i][j]);

	printf ("\n");

	for(i=0; i<L; i++)
	{
		for(j=0; j<C ;j++)
			printf("%5d ", m[i][j]);
			
		printf("\n\n");
	}
	
	for(i=0; i<L; i++)
	{
		maior= m[i][0];
		
		for(j=1; j<C; j++)
			if(m[i][j]>maior)
				maior=m[i][j];
		
		printf("\nMaior elemento da linha %d: %d", i+1, maior);
	}
	
	printf ("\n\n");
	
	for(i=0; i<C; i++){
		maior= m[0][i];
	
		for(j=1; j<L; j++)
			if(m[j][i]>maior)
				maior= m[j][i];
				
		printf("Maior elemento da coluna %d: %d\n",i+1,maior);
	}
	
	return 0;
}
