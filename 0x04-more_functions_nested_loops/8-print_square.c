#include "main.h"
/**
* print_square - Entry point
* @b: int type number
* Return: void
*/
void print_square(int b)
{
	char d = '#';
	int a = 0;

	while (a < b)
	{
		int n;

		for (n = 1; n <= b; n++)
		{
			_putchar(d);
		}
		a++;
		_putchar('\n');
	}
	if (b <= 0)
	{
		_putchar('\n');
	}
}

