#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: parameter 1
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

