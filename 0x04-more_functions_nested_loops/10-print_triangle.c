#include "main.h"

/**
 *
 *
 */
void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= (size - i))
					_putchar('#');
				else 
					_putchar(' ');
			}
		}
	}
}
