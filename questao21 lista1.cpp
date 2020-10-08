#include <stdio.h>

struct Ponto 
{
	float x;
	float y;
};

void lerPonto(Ponto *p)
{
	printf("Digite um valor real para x: ");
	scanf("%f", &p -> x);
	
	printf("Digite um valor real para y: ");
	scanf("%f", &p -> y);
	
	return;
}

void calcCoordenada(Ponto *a, Ponto *b, Ponto *c)
{
	a -> x = b -> x + c -> x;
	a -> y = b -> y + c -> y;
}

int main() 
{
	Ponto a;
	Ponto b;
	Ponto c;
	
	printf("Coordenada a:\n");
	lerPonto(&a);
	printf("\n");

	printf("Coordenada b:\n");
	lerPonto(&b);
	printf("\n");

	printf("Coordenada c:\n");
	lerPonto(&c);
	printf("\n");

	calcCoordenada(&a, &b, &c);
	printf("Coordenada a: \n");
	printf("x: %f\n", a.x);
	printf("y: %f\n", a.y);
	printf("\n");
	
	printf("Coordenada b: \n");
	printf("x: %f\n", b.x);
	printf("y: %f\n", b.y);
	printf("\n");

	printf("Coordenada c: \n");
	printf("x: %f\n", c.x);
	printf("y: %f\n", c.y);
	printf("\n");
	
	return 0;
}
