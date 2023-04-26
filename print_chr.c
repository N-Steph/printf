#include "main.h"

/**
 * print_chr - print char
 * @args: list of variable arguments
 *
 * Return: number of char printed
 *
 */
int print_chr(va_list args)
{
	int len;
	int x;

	len = 0;
	x = va_arg(args, int);
	len += _putchar(x);
	return (len);
}
