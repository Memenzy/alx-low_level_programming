#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: is a variable
 */
void print_rev(char *s)
{
	int i = 0, rev;

	while (s[rev++])
		rev++;

	for (i = rev - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
