#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 *
 * @argc: the argument count
 * @argv: the array of args
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (x = 0; cents > 0; x++)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
	}
	printf("%d\n", x);
	return (0);
}
