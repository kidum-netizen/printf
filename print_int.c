#include "main.h"
/**
 * print_binary- converts unsigned int to binary
 * meaning you only see 0 and 1, unsigned int has 32 bits
 * @i: The usigned int to be checked
 * Return: Binary of unsigned int
 */
int print_binary(unsigned int i)
{
	/*We are going to use recursion*/
	int total = 0;

	if (i == 0)
	{
		return (_putchar('0'));
	}
	while (i > 0)
	{
		print_binary(i / 2);
		total += _putchar('0' + (i % 2));
	}
	return (total);
}
/**
 * binary_va- This converts to variadic function
 * to ensure it is taken by format file
 * @conv: The variable
 * Return: value called in print_binary
 */
int binary_va(va_list conv)
{
	unsigned int n;

	n = va_arg(conv, unsigned int);
	return (print_binary(n));
}
