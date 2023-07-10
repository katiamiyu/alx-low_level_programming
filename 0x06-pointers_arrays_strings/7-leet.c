#include "main.h"
/**
 * leet - encode into 1337speak
 *
 * @str: input value
 *
 * Return: a string value
 */
char *leet(char *str)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == s1[y])
			{
				str[x] = s2[y];
			}
		}
	}
	return (str);
}
