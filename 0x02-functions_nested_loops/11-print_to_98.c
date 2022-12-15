#include <stdio.h>
/**
 * Print_to _98 - prints all natural numbers from
 * n to 98 with a new line
 * Description: prints all natural number from n - 98
 * @n: input Number
 * Return: 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
