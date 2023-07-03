#include "main.h"
#include <string.h>

/**
 * _strstr - function to find the first occurrnce of full string
 *
 * @haystack: pointer to the main string
 * @needle: pointer to the target string
 *
 * Return: pointer to the first to the beginning of target sring
 */

char *_strstr(char *haystack, char *needle)
{
	/*counters*/
	unsigned int i = 0;
	unsigned int j = 0;

	/*
	 * string length
	 */
	unsigned int len1 = strlen(haystack);
	unsigned int len2 = strlen(needle);

	while (i < len1)
	{
		for (j = 0; j < len2; j++)
		{

		}
		i++;
	}

	return (NULL);
}
