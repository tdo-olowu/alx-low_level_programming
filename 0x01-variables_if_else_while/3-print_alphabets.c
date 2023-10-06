#include <stdio.h>

/**
 * main - prints the Latin alphabet lower then upper
 * Return: 0 for success 1 for failure.
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ++ch)
		putchar(ch);
	putchar('\n');

	return (0);
}
