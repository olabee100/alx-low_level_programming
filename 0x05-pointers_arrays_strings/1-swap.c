#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of a and b
 * @a: first valu
 * @b: Second value
 * Retuen: The swapped values
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
