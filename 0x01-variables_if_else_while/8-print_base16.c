#include<stdio.h>

/**
 * main - This programme print numbers from 0 to 10
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	/*blanck line after declaration */
	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
