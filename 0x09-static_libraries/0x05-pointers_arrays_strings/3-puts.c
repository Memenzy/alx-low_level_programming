#include "main.h"

/**
 *  _puts - a function that prints a string, followed by a new line, to stdout
 *  @str: is a variable
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
