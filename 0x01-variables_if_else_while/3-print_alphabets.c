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
for (c = 'a'; c <= 'z'; c++)
	putchar(c);
for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
putchar('\n');
return (0);
}
