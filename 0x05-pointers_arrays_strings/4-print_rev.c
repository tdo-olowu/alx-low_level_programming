#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 * Return: no return value, just print to stout
 */
void print_rev(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; ++i)
	{
	}
	i = i - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		--i;
	}
	putchar('\n');
}
