#include "main.h"
/**
 * my_print - Handles d and i specifiers
 * @format: a character string
 * Return: characters
 */
int my_print(const char *format, ...)
{
	int total = 0;
	va_list argum;
	int n;
	char c;
	int x = 1;

	va_start(argum, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				n = va_arg(argum, int);
				if (n < 0)
				{
					write(1, "-", 1);
					n = -n;
				}
				if (n >= 0 && n <= 9)
				{
					c = '0' + n;
					write(1, &c, 1);
					total++;
				}
				else
				{
					while (n / x >= 10)
					{
						x *= 10;
					}
					while (x > 0)
					{
						c = '0' + n / x;
						write(1, &c, 1);
						total++;
						n %= x;
						x /= 10;
					}
				}
			}
			else
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
	va_end(argum);
	return (total);
}
