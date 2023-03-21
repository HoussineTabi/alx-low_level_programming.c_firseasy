#include "main.h"

/**
 * main - This programme is for write alphabets in lowercase
 * We are going to use function to do that
 * Return: 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet -  printing lower alphabet starting from a to z
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
