#include "main.h"
/**
 * _isalpha - a function
 * @c: the parameter
 * Return: (1) if c, else return (0)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 132))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
