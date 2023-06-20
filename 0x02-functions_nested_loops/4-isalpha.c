#include "main.h"


/**
 * _isalpha- fuction to check if the input is letter or not
 *
 * @c: variable to carry the letter to check
 *
 * Return: 1 if letter ,  0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
