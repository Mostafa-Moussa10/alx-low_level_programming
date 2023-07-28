#include "lists.h"

/**
 * list_len - function to get length of a linked list
 * @h: pointer to the header of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

