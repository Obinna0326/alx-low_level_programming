#include "main.h"
/**
 * _islower - checks for lowercase characters
 *@c: stores the value to be checked
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

