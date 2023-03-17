#include <stdio.h>
#include<stdlib.h>

/**
 * main - Print alphanets in lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
