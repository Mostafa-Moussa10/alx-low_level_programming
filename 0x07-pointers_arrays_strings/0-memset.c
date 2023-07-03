#include "main.h"

/**
 * _memset - function to fill the firest n bytes of the memory
 *
 * @s: pointer to the first byte of the memory
 * @b: constant to fill the bytes with
 * @n: number of bytes to fill
 *
 * Return: the value of s
 */

char *_memset(char *s, char b, unsigned int n)
{

	/*counter*/
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	

	return (s);
}

