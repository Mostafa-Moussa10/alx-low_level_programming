#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; /*counter*/
	int j = 0; /*counter*/

	/*length of string*/
	while (dest[i] != '\0')
	{
		i++;
	}

	/*concatenates src to dest*/
	while (s[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	/*add \0*/
	dest[i] = src[j];
	
	return (dest);
}

