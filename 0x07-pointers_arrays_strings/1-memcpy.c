#include "main.h"

/**
 * _memcpy - functionn to copy n bytes from a string to another
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: the number of bytes
 *
 * Return: the value of the first string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*counter*/
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
