#include "main.h"
/**
 * print_alphabet_x10 - prints the alphbet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ab;
	int i;

	i = 0;

	while (i < 10)
	{
		ab = 'a';
		while (ab <= 'z')
		{
			_putchar(ab);
			ab++;
		}
		_putchar('\n');
		i++;
	}
}



