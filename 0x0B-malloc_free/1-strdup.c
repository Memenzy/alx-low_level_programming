#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, k;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		k++;

	array = malloc(sizeof(char) * (k + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];

	array [k] = '\0';

	return (array);

}
