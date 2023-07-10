#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - function creates array with dynamic site
 *
 * @size: determins sizs of mem
 * @c: initializing char
 *
 * Return: Array of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *str = malloc(sizeof(char) * size);

	if ((size == 0) || (str == NULL))
		return (NULL);

	while (count < size)
	{
		str[count] =  c;
		count++;
	}
	return (str);
}
