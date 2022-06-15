#include "main.h"

/**
 * rev_string - prints a string in reversal, followed by a new line,
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
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
