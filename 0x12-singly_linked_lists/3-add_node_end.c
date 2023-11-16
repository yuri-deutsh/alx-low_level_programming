#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tem;
	size_t char_count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (char_count = 0; str[char_count]; char_count++)
		;

	new->len = char_count;
	new->next = NULL;
	tem = *head;

	if (tem == NULL)
	{
		*head = new;
	}
	else
	{
		while (tem->next != NULL)
			tem = tem->next;
		tem->next = new;
	}

	return (*head);
}

