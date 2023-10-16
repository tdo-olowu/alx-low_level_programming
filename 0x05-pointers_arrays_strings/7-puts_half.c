#include "main.h"

/**
 * puts_half - print the latter half of a string
 * @str: the string to be bisected
 * Return: none
 */
void puts_half(char *str)
{
	int i, ln;

	for (ln = 0 ; str[ln] != '\0' ; ++ln)
	{
	}
	if ((ln % 2) == 0)
		i = ln / 2;
	else
		i = (ln / 2) + 1;
	for (; str[i] != '\0' ; ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
