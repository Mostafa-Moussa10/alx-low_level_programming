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

	p = (char *) malloc (sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (p == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < strlen(s1); i++)
			p[i] = s1[i];
	}

	if (s2 != NULL)
		while (j < strlen(s2))
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';

	return (p);
}

