#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - fuction to get the value of n
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int r;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/*get the last digit of string n*/

	r = n%10;

	/*check the last number*/
	
	if (r > 5)
	{
		printf("Lastt digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r = 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else if ((r < 6) && (r != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}


	return (0);
}
