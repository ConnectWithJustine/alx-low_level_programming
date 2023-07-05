#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list (handles loops)
 * @h: Pointer to the pointer to the head of the list
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	return (count);
}
