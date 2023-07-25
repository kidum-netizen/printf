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
	char per;
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
			}
			else if (*format == 's')
			{
				s = va_arg(form, char*);
				while (*s != '\0')
				{
					write(1, s, 1);
					s++;
				}
			}
			else if (*format == '%')
			{
				per = '%';
				write(1, &per, 1);
			}
			else
			{
				per = '%';
				write(1, &per, 1);
				format--;
			}
		}
		else
		{
			write(1, format, 1);
		}
		format++;
		total++;
	}
	va_end(form);
	return (total);
}
