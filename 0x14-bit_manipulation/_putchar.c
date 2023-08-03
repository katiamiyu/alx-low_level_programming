#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a char to screen
 * @c: char parameter
 * Return: Always 1 (success), -1 (failure).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
