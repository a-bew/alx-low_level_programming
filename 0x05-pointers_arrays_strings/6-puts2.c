#include "main.h"

/**
 * puts2 - prints a string, followed by a new line,
 * @s: pointer to the string to print
 * Return: void
*/


void puts2(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}

		i++;
	}
	_putchar('\n');
}
