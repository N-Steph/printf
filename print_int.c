#include "main.h"

/**
 * print_int - print decimal & integer
 * @args: list of variable arguments
 *
 * Return: len (number of char printed)
 */
int print_int(va_list args)
{
	int x;
	int len;

	x = va_arg(args, int);
	len = 0;
	if (x < 0)
	{
		x = -x;
		_putchar('-');
		len += 1;
	}
	len += (puts(convert(x, 10)) - 1);
	return (len);
}
