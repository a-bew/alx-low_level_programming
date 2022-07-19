#include "lists.h"

/**
 * print_listint -  prints all the elements of a
 * listint_t list
 * @h: listint_t list
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t n = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		n++;
	}

	return (n);
}
