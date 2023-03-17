#include<stdio.h>
#include<stdlib.h>

/**
 * main - Combination of number from 0 to 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		for (j = 0; j <= 9; j++)
		{
			putchar(',');
			if (i != j)
				putchar(j + '0');
		}
		putchar('\n');
	}
	return (0);
}
