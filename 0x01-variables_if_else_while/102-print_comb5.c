#include<stdio.h>
/**
 * main - This task for combinition long
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k, l, line = 0;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if (k == 0)
					l = 1;
				else
					l = 0;
				while (l <= 9)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
					}
					putchar(' ');
					line++;
					if (line == 9)
					{
						putchar('\n');
						line = 0;
					}
					l++;
				}
				k++;
			}
			j++;
		}
	}
	return (0);
}
