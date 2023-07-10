#include "main.h"
/**
 * puts_half - print half of a given string to screen
 *
 * @str: pointer char array
 *
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0;
	int h = 0;

	while (str[x] != '\0')
	{
		x = x + 1;
	}
	if (x % 2 == 0)
		h = x / 2;
	else
		h = (x + 1) / 2;

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
