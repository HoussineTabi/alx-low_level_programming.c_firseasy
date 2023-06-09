#include "main.h"

/**
 * print_number - printing a number using _putchar
 *
 * @n: integer parameter
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		_putchar('-');
		if (n / 10 != 0)
		{
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n + '0');
	}
}
