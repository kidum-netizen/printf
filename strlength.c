#include "main.h"
/**
 * strlength- Prints the length of a string
 * @s: string
 * Return: Length of string
 */
int strlength(const char *s)
{
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total++;
	}
	return (total);
}
