#include "main.h"

/**
 * _islower - aw, don't look down on yourself
 * Return: 1 if character is lowercase, else 0
 */
int _islower(int c)
{
	if (('a' <= c) && (c <= 'z'))
		return (1);
	else
		return (0);
}
