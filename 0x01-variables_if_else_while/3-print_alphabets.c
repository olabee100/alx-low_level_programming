#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, j;

	a = 97;
	j = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
