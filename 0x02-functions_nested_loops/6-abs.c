#include "main.h"

/**
 * _abs - return the value absolute of an integer
 *
 * @a: an interger parameter
 * Return: a or a * -1
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
