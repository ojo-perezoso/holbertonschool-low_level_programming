#include "lists.h"
/**
 * add_node - adds a new head node to a linked list
 * @head: old head to move
 * @str: value of new head->str
 * Return: the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head)
	{
		new = malloc(sizeof(*new));

		if (new)
		{
			if (!str)
				str = "\0";
			new->str = strdup(str);
			new->len = strlen(str);
			new->next = *head;

			*head = new;

			return (*head);
		}
	}
	return (NULL);
}
