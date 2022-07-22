#include "main.h"

/**
 * _islower - check for alphabetical characters
 * @c: variable
 * Return: Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
