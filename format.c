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
	int ch;
	char *s;

	va_start(form, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				ch = (char) va_arg(form, int);
				write(1, &ch, 1);
				total++;
			}
			else if (*format == 's')
			{
				s = va_arg(form, char*);
				while (*s != '\0')
				{
					write(1, s, 1);
					s++;
					total++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
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
