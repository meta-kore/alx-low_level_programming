#include "main.h"

/**
 * print_line - prints straight line n times.
 * input: n
 * @n: times the line is printed.
 * Return: null
 */
 void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
