#include "main.h"

/**
 * print_diagonal - this fucntion print a diagonal of slash
 * @n: parameter of type integer
 */
void print_diagonal(int n)
{
	int i,j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
