#include <stdio.h>
/**
 * main - Print alphabets
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i = '0';
	char i = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
