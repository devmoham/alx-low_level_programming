#include <stdio.h>
/**
 * main - Print numbers  0-9
* Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

