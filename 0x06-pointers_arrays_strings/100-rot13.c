#include "main.h"
/**
 * rot13 - encoder rot13
 *
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int x, y;

	char datarow[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == datarow[y])
			{
				s[x] = rotdata[y];
				break;
			}
		}
	}
	return (s);
}
