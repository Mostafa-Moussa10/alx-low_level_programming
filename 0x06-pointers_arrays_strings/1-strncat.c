#include "main.h"


/**
 * _strncat - function to concatenates two strings but with specific number of letters
 *
 * @dest: first string
 * @src: second string
 * @n: number of letters
 *
 * Return: new value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/*counters*/
	int i = 0;
	int j = 0;

	/*length of first string*/
	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
	
		j++;
		i++;
	}
	
	return (dest);
}
