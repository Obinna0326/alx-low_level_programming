#include "main.h"
/**
 * print_last_digit - Prints the last digit of a Number
 * @i: stores the value
 * Return: Return value of last digit
 */
int print_last_digit(int i)
{
	int h;

	h = (i % 10);

	if (h < 0)
	{
		h = (-1 * h);
	}
	_putchar(h + '0');
	return (h);
}
