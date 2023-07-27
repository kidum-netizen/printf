#include "main.h"
/**
 * print_binary- converts unsigned int to binary
 * meaning you only see 0 and 1, unsigned int has 32 bits
 * @i: The usigned int to be checked
 * Return: Binary of unsigned int
 */
void print_binary(unsigned int i)
{
	/*We are going to use recursion*/
	if (i > 1)
	{
		print_binary(i / 2);
		_putchar('0' + (i % 2));
	}
}
/**
 * binary_va- This converts to variadic function
 * to ensure it is taken by format file
 * @conv: The variable
 * Return: value called in print_binary
 */
void binary_va(va_list conv)
{
	unsigned int n;

	n = va_arg(conv, unsigned int);
	print_binary(n);
}
