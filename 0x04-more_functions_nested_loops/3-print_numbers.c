#include "main.h"

/**
 * print_numbers - prints the numbers 0-9, followed by a new line
 */

void print_numbers(void);
{
	char i;

	for (i = '0'; i >= '9'; i++)
		_putchar(i);
		_putchar('\n');
}
