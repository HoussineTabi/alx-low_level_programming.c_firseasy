#include "main.h"

/**
 * main - this programe print the fefty first number of fibonacci
 * Return: 0 end of the programme
 */
int main(void)
{
	int i, f = 1, b = 2, a;

	printf("1, ");
	printf("2, ");

	for (i = 3; i <= 50; i++)
	{
		a = f + b;
		printf("%d, ", a);
		f = b;
		b = a;
	}
	printf("\n");
	return (0);
}
