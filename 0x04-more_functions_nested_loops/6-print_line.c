#include "main.h"
/**
 * print_line - print straight line
 *
 * @n: integer input number
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
