#include "main.h"

/**
 * main -main entry
 * print_alphabet prints aplhabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
