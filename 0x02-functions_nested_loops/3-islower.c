#include "main.h"
/**
 *
 * _islower - checks for lowercase characters 
 *
 *Return: 1 if c is lower case or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

