#include <stdio.h>
/**
* main - Print numbers  0-9
* Return: Always 0 (Success)
*
*/
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}