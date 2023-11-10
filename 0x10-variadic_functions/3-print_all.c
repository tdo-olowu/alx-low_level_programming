#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - print all given args
 * @format: the format of the arguments i.e. types
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep, *str;
	int i, j;
	float f;
	char ch;

	va_start(ap, format);
	j = 0;
	while (format[j] != '\0')
	{
		sep = ", ";
		switch (format[j]) {
			case 'c':
				ch = va_arg(ap, int);
				printf("%c%s", ch, sep);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = va_arg(ap, int);
				printf("%f%s", f, sep);
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s%s", str, sep);
				break;
		}
		++i;
	}
	va_end(ap);
}
