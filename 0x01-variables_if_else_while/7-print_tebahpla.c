#include <stdio.h>
/**
 * main - Print alphabets in lowercase a-z
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i = 'z';

	while (i <= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
