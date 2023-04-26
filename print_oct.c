#include "main.h"

/**
 * print_oct - print number in base 8
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_oct(va_list args)
{
	unsigned int x;
	int len;

	x = va_arg(args, unsigned int);
	len = 0;
	len += (puts(convert(x, 8)) - 1);
	return (len);
}
