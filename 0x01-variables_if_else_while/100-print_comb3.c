#include <stdio.h>

/**
 * main-Entry
 *
 * Return:0
 */

int main(void)
{
	int a;

	int b;

	for (a = 48; a < 58; a += 1)
	{
		for (b = 48; b < 58; b += 1)
		{
			if (a != b && a < b)
		{
			putchar(a);
			putchar(b);
		if (a == 56 && b == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		}
	}
}
putchar('\n');

return (0);
}
