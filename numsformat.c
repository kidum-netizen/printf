#include "main.h"
/**
 * numsform- Handles d and i specifiers
 * @nums: int specifiers
 * Return: total number of nums
 */
int numsform(va_list nums)
{
	int i;
	unsigned int x;
	int div = 1, leng = 0;

	i = va_arg(nums, int);

	if (i < 0)
	{
		leng += _putchar('-');

		x = i * -1;
	}
	else
	{
		x = i;
	}
	while (x / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		leng += _putchar('0' + x / div);
		x %= div;
		div /= 10;
	}
	va_end(nums);
	return (leng);
}
