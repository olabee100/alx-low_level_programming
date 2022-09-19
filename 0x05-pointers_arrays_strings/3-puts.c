#include "main.h"
#include <unistd.h>

/**
 * _puts - print a string
 * @str: string
 * Return: The string and a new line
 */

void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
