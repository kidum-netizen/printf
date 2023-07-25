#include "main.h"
/**
 * _putchar- Prints single characters
 * @c: the character
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
