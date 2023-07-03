#include "main.h"
#include <string.h>

/**
 * _strspn - function to get the number of intial segment
 *
 * @s: pointer to the main string
 * @accept: pointer to the values to check
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	/*counter*/
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int num = 0;
	unsigned int len2 = strlen(accept);


	while (s[i] != ' ')
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
		}
		i++;
	}
	return (num);
}
