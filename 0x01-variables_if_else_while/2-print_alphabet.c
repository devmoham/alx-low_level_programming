#include <stdlib.h>
/**
 * main - Print alphabets in lowercase a-z
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar("\n")
	return (0);
}
