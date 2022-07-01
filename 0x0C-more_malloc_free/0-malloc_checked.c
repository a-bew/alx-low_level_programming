#include "main.h"

/**
 * *malloc_checked - allocate memory using malloc
 * @b - integer param
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *c = malloc(sizeof(int *) * b);

	if (c == NULL)
		exit(98);

	return (c);

}
