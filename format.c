#include "main.h"
/**
 * _printf- Produces output according to format
 * @format: character sting
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list form;
	int total = 0;

	va_start(form, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				write(1, "%", 1);
				total++;
			}
			else if (*format == 's')
			{
				formstring(form);
			}
			else if (*format == 'c')
			{
				charform(form);
			}
			else if (*format == 'd' || *format == 'i')
			{
				numsform(form);
			}
			else
			{
				write(1, format - 1, 1);
				total++;
			}
		}
		else
		{
			write(1, format, 1);
			total++;
		}
		format++;
	}
	va_end(form);
	return (total);
}
