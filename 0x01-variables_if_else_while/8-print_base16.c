#include <stdio.h>

/**
 * main - prints hex digits in a fake way.
 * Return: 0 means success
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ++ch)
		putchar(ch);
	for (ch = 'a' ; ch <= 'f' ; ++ch)
		putchar(ch);
	putchar('\n');

	return (0);
}
