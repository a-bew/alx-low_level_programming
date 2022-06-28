#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes it with a specific char.
 * @size - array size
 * @c - array initialize of char
 *
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array, *empty;
	unsigned int index;

	if (size == 0)
		return (empty);

	array = malloc(sizeof(char) * size);

	if (array == empty)
		return (empty);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

