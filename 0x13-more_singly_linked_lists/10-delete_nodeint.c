#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a linked list
 * @head: Pointer to the pointer to the head node
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
