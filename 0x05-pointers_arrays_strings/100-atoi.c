#include <stdio.h>
#include <string.h>

/**
 * _atoi - function to convert string to an integer
 *
 * @s: pointer to string
 *
 * Return: the value of string as integer
 */

int _atoi(char *s)
{
	int i = 0; /*counter*/
	int len = strlen(s);
	int sum = 0;
	int sign = 1; /*sign*/

	while (i < len)
	{
		if (s[i] == '-')
		{
		       sign = -sign;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (i < len)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					sum = sum * 10 + (s[i] - '0');
				}
				else
				{
					break;
				}
	
				i++;
			}
			break;
		}
		i++;
	}
	sum = sign * sum;
	return (sum);
}


