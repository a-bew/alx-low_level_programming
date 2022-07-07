#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: the number of elements in the array
 * @cmp: function pointer that execute
 * Return: -1 if no matches or size <= 0, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

	return (-1);
}
