#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: A pointer to the first node of the list to free
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
