#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabit in lowercase, except p and e followed by a newline
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

