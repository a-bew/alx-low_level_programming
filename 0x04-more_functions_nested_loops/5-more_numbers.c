#include "main.h"
/**
* more_numbers - Entry point
* description - prints 10 times the numbers, from 0 to 14, followed by a new line
* Return: void
*/

void more_numbers(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
		c = 'a';
		while (c <= 14)
		{
			_putchar("0" + c);
			c++;
		}
		_putchar('\n');
		d++;
	}
}

