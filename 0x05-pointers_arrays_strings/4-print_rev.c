#include "main.h"

/**
 * print_rev - prints string backwards
 * @s:Reverse string
 * Return:Reverse
 */

void print_rev(char *s)
{
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{
	}
	for (r = r - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
