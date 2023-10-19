#include "main.h"

/**
 * leet - converts comprehensible sentences to gibberish
 * @str: comprehensible sentence
 * Return: pointer to gibberish
 */
char *leet(char *str)
{
	char *key = "aeotl";
	char *value = "43071";

	int i, j;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		for (j = 0 ; j < 5 ; ++j)
		{
			if ((str[i] == key[j]) || (str[i] == key[j] + 'A' - 'a'))
				str[i] = value[j];
		}
	}

	return (str);
}
