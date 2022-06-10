#include "main.h"
/**
* print_diagonal - Entry point
* @b: int type number
* Return: void
*/
void print_triangle(int b)
{
	char d = '#';
	int a = 0;

	while (a < b)
	{
		int n;

		for (n = 0; n <= b; n++)
		{
			c = b - a;
			if (c > n)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(d);
			}
		}
		a++;
		_putchar('\n');
	}
}

