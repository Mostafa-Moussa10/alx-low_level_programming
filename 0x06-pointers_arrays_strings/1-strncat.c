#include "main.h"


/**
 * _strncat - function to concatenates two strings
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

	while (j < n - 1 || src[j] != '\0')i
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	/*copy null*/
	dest[i] = src[j];

	return (dest);
}
