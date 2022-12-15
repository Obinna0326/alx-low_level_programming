#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for uppercase character
 * Return: Returns 1 if c is uppercase
 * and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
