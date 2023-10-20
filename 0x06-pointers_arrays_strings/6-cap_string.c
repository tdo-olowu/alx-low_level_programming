#include "main.h"

/**
 * cap_string - convert words to Words
 * @str: the string into question
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int prev_ch, ch, i, j;

	char *seps = " \t\n,;.!?\"(){}";

	prev_ch = '\0';
	ch = '\0';

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		ch = str[i];
		for (j = 0 ; seps[j] != '\0' ; ++j)
		{
			if ((prev_ch == seps[j]) && ((ch >= 'a') && (ch <= 'z')))
				str[i] += 'A' - 'a';
		}
		prev_ch = ch;
	}

	return (str);
}
