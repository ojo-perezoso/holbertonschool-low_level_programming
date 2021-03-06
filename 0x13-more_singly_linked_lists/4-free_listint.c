
#include "lists.h"
/**
 * free_listint - frees a singly linked list of ints
 *
 * @head: pointer to the singly linked list
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);

		free(head);
	}
}
