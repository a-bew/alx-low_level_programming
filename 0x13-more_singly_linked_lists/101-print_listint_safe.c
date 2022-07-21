#include "lists.h"

/**
 * print_listint_safe -  prints all the elements of a
 * listint_t list
 * @head: listint_t list
 * Return: the number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	size_t n = 0;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		n++;
	}

	return (n);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
