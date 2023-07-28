#include "lists.h"

/**
 * print_list - function to print a linked list
 * @h: pointer to the header of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->len);
		h = h->next;
	}
	return (count);
}

