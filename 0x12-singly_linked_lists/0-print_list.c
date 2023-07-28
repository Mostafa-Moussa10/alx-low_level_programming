#include "lists.h"

/**
 * print_list - function to print a linked list
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
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}

