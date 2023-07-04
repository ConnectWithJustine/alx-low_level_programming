#include "lists.h"
/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: list.
 * Return: the elements linked.
 */

size_t list_len(const list_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
