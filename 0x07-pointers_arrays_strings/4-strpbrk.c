#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r]
			return (s);
		}
		s++;
	}
	return ('\0');
}
