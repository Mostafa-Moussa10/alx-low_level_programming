#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the resultant string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	p = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (p == NULL)
		return (NULL);


	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';

	return (p);
}

