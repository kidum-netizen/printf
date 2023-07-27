#include "main.h"
/**
 * _printf- forms an output based to format
 * @format: character sting
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list form;
	int total = 0, sum = 0;

	if (format == NULL)
		return (-1);
	va_start(form, format);
	/*while format is not null*/
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			{
				write(1, "%", 1);
				total++;
			}
			else if (*format == 's')
			{
				sum = formstring(form);
				/*meaning if string is null*/
				if (sum == -1)
				{
					/*Prints -1*/
					total += _putchar('-');
					total += _putchar('1');
				}
				else
					total += sum;
			}
			else if (*format == 'c')
				total += charform(form);
			else if (*format == 'd' || *format == 'i')
				total += numsform(form);
			else if (*format == 'b')
				binary_va(form);
			else
			{
				write(1, format - 1, 2);
				total += 2;
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
