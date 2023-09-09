#include <stdio.h>
/**
 * main - Print alphabets
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i = '0';
	char y = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
