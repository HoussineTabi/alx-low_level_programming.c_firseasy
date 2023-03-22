#include "main.h"

/**
 * print_alphabet_x10 -  printing lower alphabet starting from a to z ten times
 */

void print_alphabet_x10(void)
{
	int c, l;

	for (l = 0; l <= 9; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
