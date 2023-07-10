#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int f1 = 0, f2 = 1, x;
	int next = f1 + f2;

	printf("%d, %d", f1, f2);
	for (x = 2; x <= 50; x++)
	{
		printf(", %d", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	printf("\n");
	return (0);
}

