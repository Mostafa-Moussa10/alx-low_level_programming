#include "main.h"


/**
 * _islower - fuction to check if the letter is lower case or not
 *
 * Return: 1 if lower 0 if otherwise
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
