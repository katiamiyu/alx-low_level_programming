#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * @n: integer input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			if (x == 1)
				_putchar('\\');
			else
			{
				for (y = 1; y <= x; y++)
				{
					if (y != x)
						_putchar(' ');
					else
						_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}
