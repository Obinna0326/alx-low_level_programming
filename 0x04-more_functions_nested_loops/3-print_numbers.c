#include "main.h"
/**
 * print_numbers - prints number 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int a = 0;
	
	while (a <= 9)
{
	_putchar(a + '0');
	a++;
}
	_putchar('\n');
}
