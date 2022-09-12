#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		if (lett != 'e' && lett != 'q')
			putchar(lett);
	}

	putchar('\n');

	return (0);
}
