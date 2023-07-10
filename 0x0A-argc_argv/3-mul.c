#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: argument caunt
 * @argv: arguments vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			result *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
