#include "main.h"

/**
 * print_last_digit - printing the last digit of an int
 * @i: integer parameter
 * Return: the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
		return ((i % 10) * -1);
	else
		return (i % 10);
}
