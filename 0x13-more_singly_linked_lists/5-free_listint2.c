#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: A pointer to the first node of the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
