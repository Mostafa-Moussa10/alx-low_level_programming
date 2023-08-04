#include "main.h"

/**
 * binary_to_uint - function to convert a binary number to decimal
 * @b: pointer to the binary number
 * Return: the updated number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int j = 0;
	
	if (b == NULL)
		return (0);


	/*checker*/
	while (b[i] != '\0')
	{
		if(b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	

	while (b[i] != '\0')
		i++;
	
	i--;

	while (i + 1)
	{
		num += ((b[i] - '0') << j);
		j++;
		i--;
	}
	return (num);
}
