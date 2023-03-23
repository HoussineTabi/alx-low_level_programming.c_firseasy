#include "main.h"

/**
 * print_sign - check the sign of an int
 * @n: parameter of type int
 * Return: 1 and print + if the number is positive
 * 0 and print 0 if the number is 0
 * -1 and print - if the number is negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('+');
		return (1);
	}
}
