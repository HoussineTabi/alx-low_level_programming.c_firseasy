#include "main.h"

/**
 * print_alphabet -  printing lower alphabet starting from a to z
 */

void print_alphabet(void)
{
	int c, l;

	for (l = 0; l <= 9; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
