#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a new
 * string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc
 * and can be free
 * and initializes it with a specific char.
 * @str: str is a pointer variable
 *
 * Return: a pointer or NULL
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
