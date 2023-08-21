#include "main.h"
/**
 * _isupper - a function that checks upper case
 * @c: the char to be check
 * Return: (1) is passed
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

