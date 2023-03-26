#include "main.h"
/**
 * print_times_table - this fucntion print the times table forom 0 to 15
 * @n: an integer parameter
 */
void print_times_table(int n)
{
	int i, j, a;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = i * j;
				if (a >= 100)
				{
					_putchar(' ');
					_putchar(a / 100 + '0');
					a = a % 100;
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
					if (j != n)
						_putchar(',');
				}
				else if (a >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
					if (j != n)
						_putchar(',');
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(a + '0');
					if (j != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
