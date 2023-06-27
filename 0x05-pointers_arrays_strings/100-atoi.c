#include <stdio.h>
#include <string.h>

/**
 * _atiu - function to convert string to an integer
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

	/*get th e number and the sign*/

	while (i < len)
	{
	
		/*get the sign*/
		if (s[i] == '-')
		{
		       sign = -sign;
		}

		/*absolute value of the number*/

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (i < len)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					sum = sum * 10 + s[i] - '0';
				}
				i++;
				else
				{
					break;
				}
			}
		
			break;
		}
		i++;
	}


	/*real value of integer*/

	sum = sign * sum;
	return (sum);
}

