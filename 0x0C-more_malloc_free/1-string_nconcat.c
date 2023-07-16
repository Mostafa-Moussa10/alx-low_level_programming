#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of letters form second string
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *str;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	str = malloc(sizeof(s1) + n);

	if (str == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}

