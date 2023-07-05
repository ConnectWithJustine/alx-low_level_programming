#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list
 *
 * @head: A pointer to the first node of the list
 *
 * Return: Value of a node index.
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;
	listint_t *node_index = head;

	if (!head)
		return (0);

	while (head)
	{
		count += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (count);
}
