#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: is a string
 * @s2: is a string
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
