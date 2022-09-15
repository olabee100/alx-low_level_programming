#include "main.h"
#include <stdio.h>

/**
 * _isdigit - print digit from 0-9
 * @c: takes in a character/digit
 * Return: 1 if digit and 0 if anything else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
