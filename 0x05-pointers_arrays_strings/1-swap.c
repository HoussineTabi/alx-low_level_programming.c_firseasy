#include "main.h"

/**
 * swap_int - this function swap the values of two integers
 *
 * @a: first integer parameter
 * @b: second integer parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
