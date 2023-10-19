#include "main.h"

int _issep(char);
int _isalpha(char);

/**
 * cap_string - convert words to Words
 * @str: the string into question
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int prev_ch, ch, i;

	prev_ch = NULL;
	ch = NULL;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		ch = str[i];
		if ((_issep(prev_ch)) && (_isalpha(ch)))
			str[i] += 'A' - 'a';
		else
			prev_ch = ch;
	}

	return (str);
}


/**
 * _issep - checks if character is a valid separator
 * @ch: the character
 * Return: 1 means true, 0 means false
 */
int _issep(char ch)
{
	int condl, condu, except;

	condl = ((ch >= 'a') && (ch <= 'z'));
	condu = ((ch >= 'A') && (ch <= 'Z'));
	except = ((ch != '\'') && (ch != '-'));

	return (!condl && !condu && !except);
}


/**
 * _isalpha - is alpha
 * @ch: characters
 * Return: 1 means true, 0 means false
 */
int _isalpha(char ch)
{
	int condl, condu;

	condl = ((ch >= 'a') && (ch <= 'z'));
	condu = ((ch >= 'A') && (ch <= 'Z'));

	return (condl && condu);
}
