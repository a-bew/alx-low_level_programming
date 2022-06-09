#include "main.h"
/**
* print_line - Entry point
* description - prints the alphabet, in lowercase, followed by a new line
* Return: void
*/
void print_line(int c)
{
	char d = '_';

	while (c > 0)
	{
		_putchar(d);
		c--;
	}
	_putchar('\n');
}

