#include <stdio.h>

struct Ponto
{
	float x;
	float y;
};

void lerPonto(Ponto *v)
{
	printf("Digite um valor para x: ");
	scanf("%f", &v -> x);
	printf("Digite um valor para y: ");
	scanf("%f", &v -> y);
	return;
}

int main()
{
	Ponto v[10];
	int i;

	for(i = 0; i < 10; i++)
	{
		printf("Posicao %d do vetor:\n", i + 1);
		lerPonto(&v[i]);
		printf("\n");
	}

	for(i = 0; i < 10; i++)
	{
		printf("Vetor posicao[%d]: \n", i+1);
		printf("x: %f\n", v[i].x);
		printf("y: %f\n", v[i].y);
		printf("\n");
	}
	
	return 0;
}
