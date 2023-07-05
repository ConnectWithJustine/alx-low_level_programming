#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list
 * @head: name of the list
 * @n: number
 * Return: the number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *pointer;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (!(*head))
	{
		*head = add;
		return (add);
	}
	pointer = *head;
	while (pointer->next)
	{
		pointer = pointer->next;
	}
	pointer->next = add;
	return (add);
}
