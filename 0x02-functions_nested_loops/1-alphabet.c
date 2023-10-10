#include "main.h"

/**
 * print_alphabet - prints letters using _putchar
 * Return: 0 for success 1 for failure
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
