#include "main.h"
/**
* print_line - Entry point
* @c: int type number
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

