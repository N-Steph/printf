#include "main.h"

/**
 * print_u - print unsigned number
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_u(va_list args)
{
	unsigned int x;
	int len;

	x = va_arg(args, unsigned int);
	len = 0;
	len += (puts(convert(x, 10)) - 1);
	return (len);
}
