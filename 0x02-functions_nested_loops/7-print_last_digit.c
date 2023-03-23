#include "main.h"

/**
 * print_last_digit - printing the last digit of an int
 * @i: integer parameter
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int a;
	if (i < 0)
	{
		a = (i % 10) * -1;
		_putchar(a + '0');
		return (a);
	else
	{
		a = i % 10;
		_putchar(a + '0');
		return a;
}
