void print_alphabet(void);

/**
 * print_alphabet -  printing lower alphabet starting from a to z
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
