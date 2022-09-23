#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: is a character
 * @src: is a character
 * @n: is an integer
 *
 * Return: dset
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_l = 0;

	while (dest[i++])
		d_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[d_l++] = src[i];

	return (dest);
}
