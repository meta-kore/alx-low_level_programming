#include <stdio.h>

/**
 * main - main entry
 * main prints numers between 012 and 789
 * Return: 0
 */
int main(void)
{
	int i, a, e;

	i = 48;
	a = 48;
	e = 48;

	while (a < 58)
	{
		i = 48;
		while (i < 58)
		{
			e = 48;
			while (e < 58)
			{
				if (a != i && a != e && i != e && a < i && i < e)
				{
					putchar(a);
					putchar(i);
					putchar(e);
					if (i == 56 && a == 55 && e == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			i++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

