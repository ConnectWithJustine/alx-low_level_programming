#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list (handles loops)
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
		return (0);

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	return (count);
}
