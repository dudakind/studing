#include <stdio.h>
#define N 10

int main(){
	
	int m[N][N], i, j;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf(" %d x %d = %d\n", i, j, i, j, i*j);
			
		printf("\n");
	}
	
	return 0;
}
