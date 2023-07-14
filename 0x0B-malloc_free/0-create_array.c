#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create array of variable size
 *
 * @size: size of array
 * @c: pointer to the array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char*) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

