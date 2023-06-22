#include <stdio.h>
#include "main.h"
/**
 * _isupper - function to check whether the input letter is upper case or not
 *
 * @c: input to carry the value of letter
 *
 * Return: true if upper , false if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
