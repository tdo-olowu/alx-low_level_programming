#include <stdio.h>

/**
 * main - prints the Latin alphabet but allergic to e and q
 * Return: 0 for success 1 for failure.
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch)
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
