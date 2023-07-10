#include "main.h"
/**
 * print_numbers - prints digit from 1 to 0
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
