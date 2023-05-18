#include "lists.h"
/**
 * get_dnodeint_at_index - Locatdlistint_t list.
 * @head: The helist.
 * @index: The nate.
 * Return: If the nodst - NULL.
 * Otherwise - the a located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
