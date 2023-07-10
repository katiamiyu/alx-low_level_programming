#include "main.h"
/**
 * _puts - print a given string to screen
 *
 * @str: pointer char array
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
