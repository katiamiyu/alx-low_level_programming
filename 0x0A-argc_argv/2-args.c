#include <stdio.h>
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
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
