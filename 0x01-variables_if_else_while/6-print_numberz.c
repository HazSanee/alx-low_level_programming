#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	putchar(n + '0');
	putchar('\n');

	return (0);
}
