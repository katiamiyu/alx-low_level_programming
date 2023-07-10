#include "main.h"
/**
 * print_last_digit - find last digit
 *
 * @l: input value
 *
 * Return: last integer value
 */
int print_last_digit(int l)
{
	int x;

	x = (l % 10);
	if (l < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
