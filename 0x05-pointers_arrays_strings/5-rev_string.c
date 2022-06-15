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
	int i, half;
	char temp;

	while (s[a])
		a++;

	i = 0;
	half = a / 2;

	while (half--)
	{
		temp = s[a - i - 1];
		s[a - i - 1] = s[i];
		s[i] = temp;

		i--;
	}

}
