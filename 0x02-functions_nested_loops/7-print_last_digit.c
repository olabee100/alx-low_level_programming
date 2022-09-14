#include "main.h"

/**
 * print_last_digit - Prints the last
 * @n: input number as an integer
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int 1;

	l = n % 10;
	if (l < 0)
		{
		_putchar(-l + 48);
	return (-l);
		}
	else
	{
		_putchar(l + 48);
	return (l);
	}
}
