#include "main.h"
/**
 * puts2 - print a given string to screen
 *
 * @str: pointer char array
 *
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		x = x + 1;
		if (x % 2 != 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
