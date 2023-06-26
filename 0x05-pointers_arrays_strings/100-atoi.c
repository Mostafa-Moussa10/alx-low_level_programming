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

	if (s[0] == '-')
	{
		i++;
	}
	
	while (i < len)
	{
		if (s[i] > '9' || s[i] < '0')
		{
			return (0);
		}
		i++;

	}

	i = 0;

	if (s[0] == '-')
	{
		i++;
	}

	
	while (i < len - 1)
	{
		sum = sum + (s[i] * 10 * (len - i + 1) - '0');
		i++;
	}

	sum = sum + s[len - 1] - '0';
	
	if (s[0] == 0)
	{
	sum = -sum;
	}

	return (sum);
}

