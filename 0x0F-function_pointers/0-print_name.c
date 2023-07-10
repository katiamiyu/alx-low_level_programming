#include <stdio.h>
/**
 * printstr - prints supplied string
 *
 * @str: array pointer
 *
 * Return: void
 */
void printstr(char *str)
{
	unsigned int x = 0;

	while (str[x])
	{
		putchar(str[x]);
		x++;
	}
}
/**
 * print_name - prints entered name to screen
 *
 * @name: supplied name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
