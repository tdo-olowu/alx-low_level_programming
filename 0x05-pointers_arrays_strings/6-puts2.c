#include "main.h"

/**
 * puts2 - prints every other character in string, beginning with first.
 * @str: the string to be skipped.
 * Return: no return value.
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
	}
}
