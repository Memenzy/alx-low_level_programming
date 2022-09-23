#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: is a string
 * @src: is a string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, d_l = 0;

	while (dest[i++])
		d_l++;

	for (i = 0; src[i]; i++)
		dest[d_l++] = src[i];

	return (dest);
}
