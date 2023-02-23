#include "main.h"

/**
 * print_most_numbers - entry point
 * prints numbers from 0-9
 * Return: Last digit
 */

void print_most_numbers(void)
{
	int a;
		for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
			continue;
	_putchar(a + '0');
	}
	_putchar('\n');
}

