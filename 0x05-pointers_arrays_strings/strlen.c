#include "main.h"

/**
 * _strlen - is a function that return the length of a string
 * @s: charracter parameter
 * Return: the long of the stirng
 */

int _strlen(char *s)
{
	int l = 0;
	while ( *s != '\0')
		l++;
	return (l);
}
