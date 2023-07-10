#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strdup - duplicates array with a ptr with dynamic memory
 *
 * @str: supplied string
 *
 * Return: Array of char
 */
char *_strdup(char *str)
{
	int count = 0;
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	ptr = malloc(sizeof(char) * (count + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	return (ptr);
}
