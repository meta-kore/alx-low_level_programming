#include "main.h"

/**
 * int _islower is a prototype function
 * _islower checks for lowercase char.
 * 'c' in ACSII code
 * Return: 1 if c  is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
