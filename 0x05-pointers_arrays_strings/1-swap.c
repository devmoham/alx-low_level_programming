#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
