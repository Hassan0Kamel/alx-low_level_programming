#include "lists.h"

/**
 * sum_dlistint - Sums all istint_t list.
 * @head: The heant_t list.
 * Return: Thm of he data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
