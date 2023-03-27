#include "main.h"

/**
 * print_rev - this function print a string in reverse order
 * @s: parameter of type string
 */

void print_rev(char *s)
{
	int l;

	l = _strlen(s);
	while (l >= 0)
	{
		_putchar(*(s + l));
		l--;
	}
	_putchar('\n');
}
