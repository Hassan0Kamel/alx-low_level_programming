#include "lists.h"
/**
 * free_dlistint - Frees tint_t list.
 * @head: The hef the t_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
