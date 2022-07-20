#include "lists.h"

/**
 * listint_len - number of elements in a linked
 * @h: linked list
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t n = 0;

	while (node != NULL)
	{
		node = node->next;
		n++;
	}

	return (n);
}
