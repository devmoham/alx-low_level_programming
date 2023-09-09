#include <stdio.h>
/**
  * main - Print numbers  0-9
  * Return: Always 0 (Success)
  *
  */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = w % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", w, m);
	}
	else if (m == 5)
	{
		printf("Last digit of %d is %d and is 0\n", w, m);
	}
	else
	{
		printf("Last digit of %d is %d and is and is less than 6 and not 0\n", w, m);
	}
	return (0);
}
