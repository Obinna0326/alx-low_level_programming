#include "main.h"
/**
 * print_alphabet - Main Entry point of my program
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char _letter;

	for (_letter = 'a'; _letter <= 'z'; _letter++)
	{
		_putchar(_letter);
	}

	_putchar('\n');

}
