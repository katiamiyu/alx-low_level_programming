#include "main.h"
/**
 * print_rev - print a given string in reverse to screen
 *
 * @s: pointer char array
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
