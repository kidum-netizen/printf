#include "main.h"
/**
 * numsform- Handles d and i specifiers
 * @nums: int specifier
 * Return: total number of nums
 */
int numsform(va_list nums)
{
	int i;
	unsigned int x;
	int tens = 1, leng = 0;

	i = va_arg(nums, int);

	if (i < 0)
	{
		/*Here we are changing to absolute value*/
		leng += _putchar('-');

		x = i * -1;
	}
	else
	{
		/*if i is positive change to size_t*/
		x = i;
	}
	while (x / tens >= 10)
	{
		/*it means we mutiply by 10 to evaluate place value*/
		tens *= 10;
	}
	while (tens != 0)
	{
		/*used to determine the pv and change to single char*/
		leng += _putchar('0' + x / tens);
		x %= tens;
		tens /= 10;
	}
	va_end(nums);
	return (leng);
}
