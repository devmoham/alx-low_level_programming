#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: parameter
 *
 * Return: string
 */
void _puts(char *str)
{
	int string = 'a';

	while ('a' != '\0')
	{
		string++;
		str++;
	}
	return (string);
}
