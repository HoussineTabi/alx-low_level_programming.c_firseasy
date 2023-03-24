#include <stdio.h>

/**
 * main - this programe print the prime factors of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 2;
	long int n = 612852475143;

	while (i <= n)
	{
		if ( n % i == 0)
		{
			n = n / i;
			printf("%d ", i);
		}
		else
			i++;
	}
	printf("\n");
	return (0);
}
