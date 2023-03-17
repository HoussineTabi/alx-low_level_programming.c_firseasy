#include<stdio.h>
#include<stdlib.h>

/**
 * main - Combination of number from 0 to 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

		putchar(0 + '0');
			for (i = 1; i <= 9; i++)
		{
			putchar(',');
			putchar(i + '0');
		}

		putchar('\n');
	return (0);
}
