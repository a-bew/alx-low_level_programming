#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array, followed by a new line,
 * @a: pointer to array of int to print
 * @n: number of elements of the array to be printed
 * Return: void
*/


void print_array(int *a, int n)
{

	while (n--)
	{
		printf("%d", a[n]);
		if (n - 1 != -1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
