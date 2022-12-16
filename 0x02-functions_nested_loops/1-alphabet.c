#include <stdio.h>
#include "main.h"

/*
 * main - Function that prints alphabets.
 * print_alphabet: print alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
