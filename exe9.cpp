#include <stdio.h>
#include <stdlib.h>

char * charString (char c)
{
	char *str;

	str = (char *) malloc (sizeof(char) * 2);
	str[0] = c;
	str[1] = '\0';

	return str;
}

int main (void)
{

	char c = 'c';

	char *str;
	str = charString(c);

	printf("String: %s\n", str);

	return 0;
}
