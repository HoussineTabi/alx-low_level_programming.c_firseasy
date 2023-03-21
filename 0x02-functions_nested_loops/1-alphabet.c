#include "main.h"
/**
 * print_alphabet -  printing lower alphabet starting from a to z
 * @c: is a parameter for _putchar
 */
void _putchar(int c);
void print_alphabet(void);
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
