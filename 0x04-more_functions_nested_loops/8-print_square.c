#include "main.h"
/**
* print_square - Entry point
* @b: int type number
* Return: void
*/
void print_square(int b)
{
	char d = '#';
	int c, e;
	int a = 0;

	while (a < b)
	{
		int n;
		for (n = 0; n <= b; n++)
		{
			_putchar(d);
			
		}
		a++;
		_putchar('\n');
	}
}

