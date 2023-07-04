#include "lists.h"

/**
 * free_list - free list.
 * @head: head.
 * Return: NA.
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
