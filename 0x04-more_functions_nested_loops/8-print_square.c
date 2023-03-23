#include "main.h"

/**
 * print_square - square is a function print sqaure on thescreen
 * @size: is an integer parameter
 */

void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= n; j++)
			_putchar('#');
		_putchar('\n');
	}
	}
}
