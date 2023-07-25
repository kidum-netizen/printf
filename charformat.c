#include "main.h"
/**
 * charform- checks if we are printing characters
 * @form: checks if format is char
 * Return: if format is char
 */
int charform(va_list champ)
{
	int total = 0;
	int ch;
	
	ch = (char) va_arg(champ, int);

	write(1, &ch, 1);
	total++;
	return (total);
}
