#include <stdio.h>
struct Computador 
{
	int memoria;
	int clock;
	float capacHD;
};

int main ( ) 
{
	Computador v[3];
	Computador * p;
	int i;

	p = v;
	
	for(i = 0; i < 3; i++)
	{
		printf("Digite um valor inteiro para a memoria do computador[%d]: \n", i+1);
		scanf("%d", &p -> memoria);
		
		printf("Digite um valor inteiro para o relogio do computador[%d]: \n", i+1);
		scanf("%d", &p -> clock);
		
		printf("Digite um valor inteiro para a capacidade do HD do computador[%d]: \n", i+1);
		scanf("%f", &p -> capacHD);
		
		printf("\n");
		
		p++;
	}

	p = v;
	
	for(i = 0; i < 3; i++)
	{
		printf("Memoria do computador[%d]: %d\n", i+1, p -> memoria);
		printf("Relogio do computador[%d]: %d\n", i+1, p -> clock);
		printf("Capacidade do HD do computador[%d]: %f\n", i+1, p -> capacHD);
		printf("\n");
		p++;
	}

	return 0;
}
