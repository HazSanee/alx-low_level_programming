#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	putchar (a);
	putchar ('\n');
	return (0);
}

