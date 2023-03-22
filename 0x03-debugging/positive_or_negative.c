#include "main.h"
/**
 * positive_or_negative  - Is abut to know the sign of a randm number
 * @n is a parameter that done with the main
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
