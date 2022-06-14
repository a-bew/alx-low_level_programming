#include "main.h"

/**
 * print_rev - prints a string in reversal, followed by a new line,
 * _strlen - string length
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	int i = a - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
