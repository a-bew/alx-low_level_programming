#include "main.h"
/**
* print_diagonal - Entry point
* @b: int type number
* Return: void
*/
void print_diagonal(int b)
{
	char d = '\\';
	int c, e;
	int a = 0;

	while (a < b)
	{
		int n;
		for (n = 0; n <= b; n++)
		{
			if (a == n)
			{
				_putchar(d);
			}
			else
			{
				_putchar(' ');
			}
		}
		a++;
		_putchar('\n');
	}
}

