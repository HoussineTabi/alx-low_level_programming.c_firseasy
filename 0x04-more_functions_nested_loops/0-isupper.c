#include "main.h"

/**
 * _isupper - check if an alphabet is in upper case
 * @c: parameter of type charracter
 * Return: 1 if c is upper or 0 otherwie
 */

int _isupper(char c)
{
	if ((c >= 65) && (c < 93))
		return (1);
	else
		return (0);
}
