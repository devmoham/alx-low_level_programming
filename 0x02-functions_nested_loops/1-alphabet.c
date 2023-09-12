#include "main.h"
/**
* main - Print alphabets in lowercase a-z
*
* Return: Always 0.
*/
void print_alphabet(char alphabet)
{
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		printf(alphabet);
		alphabet++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}

