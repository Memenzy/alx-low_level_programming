#include "main.h"

/**
 * _memcpy - a function copies n bytes from memory
 * area src to memory area dest
 * @dest: is a character
 * @src: is a character
 * @n: is an integer
 *
 * Return: a point to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

