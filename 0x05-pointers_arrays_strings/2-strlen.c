#include "main.h"
#include <stdio.h>
/**
 * _strlen - A function that returns the length of a string
 * @s: Stings to be returned
 * Return: Length of string
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
