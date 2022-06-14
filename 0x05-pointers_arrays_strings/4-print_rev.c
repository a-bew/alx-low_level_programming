#include "main.h"

/**
 * _print_rev - prints a string in reversal, followed by a new line,
 * @s: pointer to the string to print
 * Return: void
*/


void _print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
