#include "main.h"
/**
 * times_table - displays the multiple table
 *
 * Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int z;

			z = x * y;
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				if (y != 0)
					_putchar(' ');
				_putchar(z + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
