#include "main.h"

/**
 * _strlen_recursion - function to get the string length
 *
 * @s: pointer to string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0])
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
