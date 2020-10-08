#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4

int main(){
	
	int m1[N][N], m2[N][N], m3[N][N], i, j;
	
	srand(time(NULL));
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			m1[i][j]= rand()%101;	
			printf("%5d", m1[i][j]);
		}
		
		printf("\n");
	}
	printf("\n");
	
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			m2[i][j] = rand()%101;	
			printf("%5d", m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if (m1[i][j] > m2[i][j])
				m3[i][j]= m1[i][j];
			else
				m3[i][j]= m2[i][j];	
				
			printf("%5d", m3[i][j]);	
		}
		
		printf("\n");
	}
	
	return 0;
}
