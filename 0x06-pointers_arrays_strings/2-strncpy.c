#include "main.h"

/**
 * _strncpy - fuction to overwrite n of letters in string
 *
 * @dest: first string
 * @src: second string
 * @n: number of letters
 *
 * Return: the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*counters*/
	int i = 0;
	int j = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}


	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	return (dest);
}
