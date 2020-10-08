#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10

int main()
{
	int m[N][N], i, j;
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if (i<j)
				m[i][j] = 2*i + 7*j -2;
			
			else 
			
			if (i==j)
				m[i][j] = 3*pow(i,2)-1;
				
			else 
			
			if (i>j)
				m[i][j]= 4*(pow(i,3)) - 5*(pow(j,2)) + 1;
				
			printf("%5d ", m[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
