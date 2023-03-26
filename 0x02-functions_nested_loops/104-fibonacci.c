#include "main.h"

/**
 * main - this programe print the fefty first number of fibonacci
 * Return: 0 end of the programme
 */
int main(void)
{
	int i;
	unsigned long int f = 1, b = 2, a;

	printf("1, ");
	printf("2, ");

	for (i = 3; i <= 98; i++)
	{
		a = f + b;
		printf("%ld", a);
		if (i != 98)
			printf(", ");
		f = b;
		b = a;
	}
	printf("\n");
	return (0);
}
