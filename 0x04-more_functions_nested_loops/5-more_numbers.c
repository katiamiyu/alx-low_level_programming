#include "main.h"
/**
 * more_numbers - primt sequence of number
 *
 * Return: void
 */
void more_numbers(void)
{
	int count;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
			{
				_putchar(count / 10 + '0');
			}

			_putchar(count % 10 + '0');
		}

		_putchar('\n');
	}
}
