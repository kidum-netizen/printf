#include "main.h"
/**
 * print_unsign- Prints unsigned integers
 * @i: The int
 * Return: unsigned int;
 */
int print_unsign(unsigned int i)
{
	int total = 0, div = 1;

	while (i / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		total += _putchar('0' + i / div);
		i %= div;
		div /= 10;
	}
	return (total);
}
