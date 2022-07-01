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
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(nmemb * size + 1);

	if (p == NULL)
		return (NULL);

	i = 0;

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}

	p[n + 1] = '\0';

	return (p);
}
