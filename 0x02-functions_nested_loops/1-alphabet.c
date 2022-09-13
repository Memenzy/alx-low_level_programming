#include "main.h"
/**
 * main - Entry point 
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}
