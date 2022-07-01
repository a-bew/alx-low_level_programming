#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocate memory for an array
 * @nmemb: size of an array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	i = 0;

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);
i}
