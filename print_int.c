#include "main.h"
/**
 * print_unsign- Prints unsigned integers
 * @argum: The unsigned int
 * Return: unsigned int;
 */
int print_unsign(va_list argum)
{
	unsigned int i;
	int total = 0, div = 1;

	i = va_arg(argum, unsigned int);

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
