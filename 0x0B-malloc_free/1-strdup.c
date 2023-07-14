#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function to duplicate a given string
 *
 * @str: the original string
 *
 * Return: the copied string
 */

char *_strdup(char *str)
{

	unsigned int i = 0;
	char *p;
	p = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		p[i] = str[i];

	return (p);
}

