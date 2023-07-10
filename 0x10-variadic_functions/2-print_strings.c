#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string with new line
 *
 * @separator: seperatorcof each word
 * @n: number of strings
 * @...: A variable number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;
	char *str;
	unsigned int index;

	va_start(word, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(word, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(word);
}
