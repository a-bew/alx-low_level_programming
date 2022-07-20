#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 *  of a linked list
 * @head: listint_t list
 * @n: size of node
 * Return: the number of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new->n = n;
	new->next = **head;
	*head = new;

	return (new);
}
