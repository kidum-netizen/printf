#include "main.h"
/**
 * print_unsign- Prints unsigned integers
 * @argum: The unsigned int
 * Return: unsigned int;
 */
int print_unsign(va_list argum)
{
	unsigned int un;
	int total = 0, x = 0;
	int n;
	char bin[32];

	un = va_arg(argum, unsigned int);
	if (un == 0)
	{
		total += _putchar('0');
	}
	while (un > 0)
	{
		bin[n++] = un % 2 + '0';

		un /= 2;
	}
	x = n - 1;
	for (; x > 0; x--)
	{
		total  += _putchar(bin[x]);
	}
	return (total);
}
