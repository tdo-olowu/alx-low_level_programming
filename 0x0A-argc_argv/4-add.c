#include <stdio.h>
#include <stdlib.h>

/**
 * _isnum - checks if string consists entirely of digits
 * @str: the string of ASCII characters.
 * Return: 0 means not a digit, 1 means is digit.
 */
int _isnum(char *str)
{
	for ( ; *str != '\0' ; ++str)
	{
		if (*str < '0' || *str > '9')
			return (0);
	}
	return (1);
}


/**
 * main - adds arbitrarily many numbers
 * @argc: how many args
 * @argv: stores the args in question.
 * Return: 0 for success, 1 for failure.
 */
int main(int argc, char *argv[])
{
	int i, total = 0;

	char *s;

	for (i = 1 ; i < argc ; ++i)
	{
		s = argv[i];
		if (_isnum(s))
			total += atoi(s);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", total);

	return (0);
}
