#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main entry
 * return: 0
 */
int void(main)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
