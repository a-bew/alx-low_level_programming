#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print single digit of base 10,
 * starting from 0 followed by a newline
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= '9')
	{
		putchar(48 +c);
		c++;
	}
	putchar('\n');
	return (0);
}
