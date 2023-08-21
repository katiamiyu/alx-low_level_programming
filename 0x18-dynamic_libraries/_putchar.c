#include <unistd.h>
/**
 * _putchar - _putchar function
 * @c: char
 * Return: -1 (failure)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
