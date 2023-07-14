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
	if (size == 0)
		return (NULL);

	c = (char*) malloc(size);

	return (c);
}

