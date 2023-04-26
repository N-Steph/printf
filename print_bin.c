#include "main.h"

/**
 * print_bin - print binary number
 * @args: list of variable arguments
 *
 * Return: number of char printed
 *
 */
int print_bin(va_list args)
{
	unsigned int x;
	int len;

	x = va_arg(args, unsigned int);
	len = 0;
	len += (puts(convert(x, 2)) - 1);
	return (len);
}
