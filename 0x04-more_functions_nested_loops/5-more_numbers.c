#include "main.h"
/**
* more_numbers - Entry point
* description - prints 10 times the numbers, from 0 to 14, followed by a new line
* Return: void
*/

void more_numbers(void)
{
	char c, e;
	int d = 0;

	while (d < 10)
	{
		e = 0;
		while (e <= 14)
		{
			c = e;
			if (e > 9)
			{
				putchar('1');
				c = e % 10;
			}
			_putchar('0' + c);
			e++;
		}
		_putchar('\n');
		d++;
	}
}

