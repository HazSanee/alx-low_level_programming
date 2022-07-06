#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: last digit
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int G = (n % 10);

	if (n < 0)
	{
		G = G * -1;
	}
	_putchar(G + '0');
	return (G);
}
