#include "main.h"

/**
 * print_HEX - print number in bae 16 & in uppercase
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_HEX(va_list args)
{
	unsigned int x;
	int len;

	x = va_arg(args, unsigned int);
	len = 0;
	len += (puts(convert(x, 16)) - 1);
	return (len);
}
