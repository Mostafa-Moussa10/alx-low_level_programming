#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}

