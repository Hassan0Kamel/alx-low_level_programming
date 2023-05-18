#include "lists.h"

/**
 * add_dnodeint_end - Adds a stint_t list.
 * @head: A pointhe dlistint_t list.
 * @n: The integer f to contain.
 * Return: If the fuls - NULL.
 * Otherwise - the ew node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
