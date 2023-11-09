#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print first n numbers given
 * @separator: padding for numbers
 * @n: the number of numbers to print
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0 ; i < n - 1 ; ++i)
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d\n", va_arg(ap, int));
		va_end(ap);
	}
}
