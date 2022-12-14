#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of element array
 * @c: char
 * Return: pointer
 **/
char *create_array(unsigned int size, char c)
{
	char *in;
	unsigned int i;

	if (size == 0)
		return (NULL);
	i = malloc(sizeof(char) * size);
	if (in == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		in[i] = c;
		i++;
	}
	return (in);
}
