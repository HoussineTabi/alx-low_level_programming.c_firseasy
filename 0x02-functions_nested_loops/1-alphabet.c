#include "main.h"
/**
 * main - the principal function
 *
 * Return: the end execution
 */
int main(void)
{
	void print_alphabet(void);
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
/**
 * main - tha function princpal
 *
 * Return: The value that return when the execution is end
 */

	print_alphabet();
	return (0);
}
