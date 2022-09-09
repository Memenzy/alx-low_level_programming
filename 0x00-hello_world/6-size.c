#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu.\n", (unsigned char)sizeof(c));
	printf("Size of an int: %lu.\n"  (unsigned int)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long int)sizeof(li));
	printf("Size of a long long int: %lu.\n", (unsigned long long int)sizeof(lli));
	printf("Size of float: %lu.\n", (unsigned float)sizeof(f));

	return (0)
}
