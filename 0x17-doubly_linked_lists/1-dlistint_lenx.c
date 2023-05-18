#include "lists.h"

/**
 * dlistint_len - Counts the number dlistint_t list.
 * @h: The head dlistint_t list.
 * Return: The numbers in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
