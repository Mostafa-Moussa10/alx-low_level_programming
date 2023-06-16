#include <stdio.h>

/*
 * main - fuction to check the number is positive or negative
 *
 * @n: random number
 *
 * Return: 0
 */

int main(int n)
{
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
}


