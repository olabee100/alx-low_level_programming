#include "main.h"

/**
 * print_line - print a straight line
 * @n: Integer amount of _
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	putchar('\n');
}
