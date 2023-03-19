#include<stdio.h>
/**
 * main - This task for combinition long
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k, l = 1, line = 0;

	for (i = 0; i <= 9;)
	{
		k = i;
		for (j = 0; j <= 9; j++)
		{
			for ( ; k <= 9; k++)
			{
				for ( ; l <= 9; l++)
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
					else
						break;
					putchar(' ');
					line++;
					if (line == 9)
					{
						putchar('\n');
						line = 0;
					}
				}
				l = 0;
			}
			l = j + 2;
			k = 0;
		}
		i++;
	}
	return (0);
}
