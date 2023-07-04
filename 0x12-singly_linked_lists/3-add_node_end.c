#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: input string
 * Return: length of string
 */
int _strlen(const char *str)
{
int cont = 0;

	while (str[cont] != '\0')
	{
		cont++;
	}
return (cont);
}
/**
 * add_node_end - print length.
 * @head: list.
 * @str: string.
 * Return: The elements linked.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *endnode;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = newnode;
	}

	if (!str)
	{
		newnode->str = 0;
		newnode->len = 0;
	}
	else
	{
		newnode->str = strdup(str);
		if (newnode->str == 0)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(str);
	}
	newnode->next = NULL;
	return (newnode);
}
