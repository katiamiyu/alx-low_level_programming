#include "main.h"
/**
 * _isalpha - printvseries of alphabets
 *
 * @c: input parameter
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
