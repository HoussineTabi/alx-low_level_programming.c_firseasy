#include "main.h"

/**
 * jack_bauer - this function print all singl minute in 24 hours
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		for (j = 0; j < 60; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}