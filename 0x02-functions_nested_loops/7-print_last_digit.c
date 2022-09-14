#include "main.h"
/**
 *print_last_digit - a function that prints the last digit of a number
 *
 * @numlstdig: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int numlstdig)
{
	int prilstdig;

	prilstdig = (numlstdig % 10);
	if (prilstdig < 0)
	{
		prilstdig = (-1 * prilstdig);
	}
	_putchar(prilstdig + '0');
	return (prilstdig);
}
