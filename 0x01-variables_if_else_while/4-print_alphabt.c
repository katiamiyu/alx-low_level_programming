#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q')
			continue;
		else if (x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');

	return (0);
}
