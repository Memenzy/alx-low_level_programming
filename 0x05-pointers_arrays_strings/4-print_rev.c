#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: is a variable
 */
void print_rev(char *s)
{
	int i = 0, rev;

	while (s[rev++])
		i++;

	for (rev = i - 1; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
