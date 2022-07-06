#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Description: print 9 times table
 */

void times_table(void)
{
	int a, b, product;

	product = 0;

	for (a = 0; a <= 9; b++)
	{
		for (a = 0; a <= 9; a++)
		{

			product = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			else if ((product < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			else
			{
				((product % 10) + '0');
			}
		}
		_putchar('\n');
}
