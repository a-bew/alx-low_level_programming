#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory using malloc
 * @b - amount of bytes
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);

}
