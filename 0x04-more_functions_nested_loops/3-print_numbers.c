#include "main.h"

/**
 * print_numbers - that function print the numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	putchar('\n');
}
