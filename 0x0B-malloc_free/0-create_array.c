#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * ceate_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific character
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
