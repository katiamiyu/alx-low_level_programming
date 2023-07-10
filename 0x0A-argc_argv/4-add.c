#include <stdio.h>
#include <stdlib.h>
/**
 * main - app adds positive numbers
 *
 * @argc: argument countee
 * @argv: array of argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int count;
	unsigned int result = 0;

	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		if ((argc >= 1) && ((*argv[count] < 48) || (*argv[count] > 57)))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[count]);
		}
	}

	printf("%d\n", result);
	return (0);
}
