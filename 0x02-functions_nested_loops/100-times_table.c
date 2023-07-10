#include "main.h"
#include <stdio.h>
/**
 * print_times_table - times table
 *
 * @n: integer var input
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int x, y;

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				int z;

				z = x * y;
				if (z > 99 || y == 0)
				{
					printf("%d", z);
				}
				else if (z > 9)
				{
					printf(" %d", z);
				}
				else
				{
					printf("  %d", z);
				}
				if (y != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}
