#include "mian.h"

/**
 * _puts - this function print a string in the output
 * @str: character parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
