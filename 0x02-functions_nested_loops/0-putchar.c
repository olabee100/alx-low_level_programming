#include "main.h"
#include "_putchar.c"

/**
 * main -Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}

	_putchar('\n');
	return (0);
}
