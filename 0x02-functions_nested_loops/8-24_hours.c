#include "main.h"

/**
 * jack_bauer - print every minute
 */

void jack_bauer(void)
{
	int h;
	int m;

	while (h = 0; h <= 23)
	{
		while (m = 0; m <= 59)
		{
			_putchar(m);
				m++;
		}
	       _putchar(h);
		       h++;
	}
	_putchar('\n');
}

