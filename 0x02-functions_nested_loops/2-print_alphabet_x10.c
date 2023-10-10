#include "main.h"

/**
 * print_alphabet_x10 - prints a to z ten times
 * Return: nothing returned
 */
void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0 ; i < 10 ; ++i)
	{
		for (ch = 'a' ; ch <= 'z' ; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
