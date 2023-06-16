#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * main - fuction to check the number is positive or negative
 *
 * Description: fuction to get the type of number
 *
 * @n: random number
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", &n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", &n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", &n);
	}

	return (0);
}

