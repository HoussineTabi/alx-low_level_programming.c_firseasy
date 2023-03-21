#include <stdio.h>

/**
 * main - We trying to write _putcha with a loop
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
