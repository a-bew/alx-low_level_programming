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
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	_putchar('\n');
}
