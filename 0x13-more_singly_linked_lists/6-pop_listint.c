#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: A pointer to the first node of the list
 *
 * Return: Value of a node delete.
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *next_node = NULL;

	if (!(*head))
	{
		return (0);
	}

	next_node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_node;

	return (value);
}
