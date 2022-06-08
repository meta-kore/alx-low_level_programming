#include "main.h"

/**
 * int _isalpha is a prototype function that.
 * _isalpha - shows 1 if the input is a letter, otherwise shows 0.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */

int _isalpha(int c)

	/* int _isalpha(int c) checks for lowercase */
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
