#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguments
 * @argv: arrays pointers to the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
