#include "main.h"
/**
 * print_binary - decimal to binary
 * @n: number printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int result;

	for (x = 63; x >= 0; x--)
	{
		result = n >> x;

		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
