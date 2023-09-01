#include "main.h"

/**
 * binary_to_uint - function to convert binary number to integer
 * @b: pointer to binary number
 * Return: the integer
 */

unsigned int binary_to_uint(const char *b)
{
	int bn = 0;
	unsigned int num = 0;
	int i = 0;

	bn = atoi(b);

	if (b == NULL)
		return (0);


	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if ((bn % 10) & 1)
		{
			num += (1 << i);
		}
		bn = bn / 10;
		i++;
	}
	return (num);
}

