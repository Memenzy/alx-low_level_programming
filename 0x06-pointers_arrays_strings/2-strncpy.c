#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: is a character
 * @src: is a character
 * @n: is an integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (0);
}
