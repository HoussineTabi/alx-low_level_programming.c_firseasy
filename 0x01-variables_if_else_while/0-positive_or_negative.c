#include <stdio.h>
#include <stdlib.h>

/**
 * main - Is abut to know the sign of a randm number
 *
 * Return: 0 ( Success )
 */

int main(void)
{
int n = rand();
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
return (0);
}
