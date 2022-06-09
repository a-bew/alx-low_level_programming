#include "main.h"
/**
* print_most_numbers - Entry point
* description - prints  the numbers, from 0 to 9, followed by a new line
* Return: void
*/
void print_most_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		if (c != 2 && c!= 4)
		{
			_putchar('0' + c);
		}

		c++;
	}
	_putchar('\n');
}

