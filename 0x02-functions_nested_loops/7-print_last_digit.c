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
	_putchar((n % 10) + '0');
	return ((n % 10));
}
