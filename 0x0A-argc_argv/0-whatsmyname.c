#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: parsed argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
