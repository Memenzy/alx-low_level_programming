#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: is a character
 * @c: is a character
 *
 * Return: if c is found then a pointer to the first occurence of the char
 * if a c is not found then NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
