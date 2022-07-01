#include <stdio.h>

/**
 * main - prints all possible combinations of single digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(48 + 'a');
	}
	if (a != 9)
	{
		putchar(',');
		putchar(' ');
	}
	a++;
	putchar('\n');
	return (0);
}

