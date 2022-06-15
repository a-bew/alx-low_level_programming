#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @s: pointer to the string to print
 * Return: void
*/


void _puts(char *s)
{
	int len = 0;
	int r, n, start;

	while (s[len])
		len++;

	r = len % 2;
	n = r != 0 ? (len - 1) / 2 : len / 2;
	start = len - n - 1;

	while (s[start])
	{
		_putchar(s[start]);
		start++;
	}
	_putchar('\n');
}
