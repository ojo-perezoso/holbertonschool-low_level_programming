#include "lists.h"
/**
 * print_list - prints all the nodes from a linked list
 * @h: header of the linked list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	if (!h)
		return (elements);

	elements++;

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	if (h->next)
		elements += print_list(h->next);

	return (elements);
}
