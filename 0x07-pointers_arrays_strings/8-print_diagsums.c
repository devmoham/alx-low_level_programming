#include "main.h"

/**
 * _diagsums - function that prints the sum of the two diagonal
 *
 * @a: parameter 1
 * @size: parameter 2
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		suml += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
