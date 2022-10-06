#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: arguements
 * @argv: array pointers to the arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
