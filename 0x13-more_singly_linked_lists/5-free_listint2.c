#include "lists.h"

/**
 * add_nodeint - adds a new node at the end
 * of a linked list
 * @head: listint_t list
 * @n: size of node
 * Return: the address of the new element, or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}
