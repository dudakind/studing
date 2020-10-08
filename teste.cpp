#include <stdio.h>

int main (void)
{
	int v[5];
	int *pi;
	int *pa;
	int x;
	int i, cont;
	
	v[0]=70;
	v[1]=40;
	pi=v;
	pa=v+1;
	
	if (*pi>*pa){
		pi=pa;
		pa=v;
		printf("%d %d\n", *pi,*pa);
	}
	
	for (cont=0;cont<5;cont++)
		printf ("v[%d]: %d\np:%p\n", cont, &v[cont], v[cont]);
	
	printf ("pi: %d\npa: %p\nx: %d\ni: %d\n", pi, pa, x, i);
}
