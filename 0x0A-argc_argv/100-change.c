#include "main.h"
#include <stdio.h>

/**
 * main - function to count the number of coins
 *
 * @argc: number of arguments
 * @argv: string to the argumetns
 * Return: 0 if success, 1 if failure
 */

int main(int argc, char **argv)
{
	int count = 0;
	int money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
		printf("0\n");


	while (money >= 25)
	{
		count++;
		money -= 25;
	}

	while (money >= 10)
	{
		count++;
		money -= 10;
	}

	while (money >= 5)
	{
		count++;
		money -= 5;
	}

	while (money >= 2)
	{
		count++;
		money -= 2;
	}

	while (money >= 1)
	{
		count++;
		money -= 1;
	}

	printf("%d", count);

	return (0);
}
