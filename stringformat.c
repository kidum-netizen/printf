#include "main.h"
/**
 * formstring- Prints strings
 * @sling: string to be checked
 * Return: Total string length
 */
int formstring(va_list sling)
{
	char *x;
	int total = 0, len = 0;

	x = va_arg(sling, char *);

	if (x == NULL)
	{
		x = "(null)";
	}
	len = strlength(x);
	write(1, x, len);
	total += len;
	return (total);
}

