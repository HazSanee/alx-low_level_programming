#include "main.h"

/**
 * jack_bauer - print every minute
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar(m);
				m++;
		}
	       _puchar(h);
		       h++;
	}
	_putchar('\n');
}

