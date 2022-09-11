#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - To compare n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %c is %d and is greater than 5\n", c, n);
	else if (n == 0)
		printf("Last digit of %c is %d and is 0\n", c, n);
	else
		printf("Last digit of %c is %d and is less than 6 and not 0\n", c, n);
	return (0);
}
