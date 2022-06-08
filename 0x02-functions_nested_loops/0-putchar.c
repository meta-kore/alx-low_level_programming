#include <unistd.h>

/**
 * main - main putchars _putchar
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
