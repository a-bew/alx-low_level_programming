#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: linked list
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	dlistint_t *current = h;

	while (next != NULL)
	{
		printf(%d\n, current->n);
		next = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}

