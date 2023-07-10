#include "main.h"
/**
 * print_triangle - Draw a triangle
 *
 * @size: integer input
 *
 * Return: 0 (success)
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			z = size - x;

			for (y = size; y >= 1; y--)
			{
				if (z > 0)
					_putchar(' ');
				else
					_putchar('#');
				z--;
			}
			_putchar('\n');
		}
	}
}
