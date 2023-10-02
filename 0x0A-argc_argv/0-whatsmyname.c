#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	_putchar("%s\n", *argv);
	return (0);
}
