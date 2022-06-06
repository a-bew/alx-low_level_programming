#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet in lowercase in reverse, followed by a newline
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d;

	while (c <= 8)
	{
		d = 1;
		while (d <= 9)
		{
			putchar('0'+c);
			putchar('0'+d);
			if (c+d != 17)
			{
				putchar(',');
				putchar(' ');
			}

			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

