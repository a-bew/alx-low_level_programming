#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet in lowercase,  and then in uppercase, followed by a newline
 * Return: 
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

