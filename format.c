#include "main.h"
/**
 * _printf- Produces output according to format
 * @format: character sting
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list form;
	char *s;
	int ch, total = 0, len = 0;

	va_start(form, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (s == NULL)
				return (-1);
			else if (*format == 'c')
			{
				ch = (char) va_arg(form, int);
				write(1, &ch, 1);
				total++;
			}
			else if (*format == 's')
			{
				s = va_arg(form, char *);
				len = strlength(s);
				write(1, s, len);
				total += len;
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
