#include "main.h"

/**
 * print_most_numbers - a function thattprints the numbers from 0 to 9
 * Return: 0-9, excluding 2 and 4 followed by a new line
 */

void print_most_numbers(void)
{
	int x;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;

		else
			_putchar(i + '0');
	}
	_putchar('\n');
}

