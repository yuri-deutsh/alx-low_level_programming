#include "lists.h"

/**
 * sum_dlistint - Sum of elements in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of the elements in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
