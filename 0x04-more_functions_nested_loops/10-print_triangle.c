#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int aa, dd, gg;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dd = 0; dd <= (size - 1); dd++)
		{
			for (aa = 0; aa < (size - 1) - dd; aa++)
			{
				_putchar(' ');
			}
			for (gg = 0; gg <= dd; gg++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
