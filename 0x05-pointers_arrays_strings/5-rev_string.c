#include "main.h"

/**
 * rev_string - prints a string in reversal, followed by a new line,
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
	int a;
	int i, half;
	char temp;

	for (a = 0; s[a] != '\0'; a++)
		;

	i = 0;
	half = a / 2;

	while (half--)
	{
		temp = s[a - i - 1];
		s[a - i - 1] = s[i];
	i	s[i] = temp;

		i--;
	}

}
