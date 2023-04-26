#include "main.h"

/**
 * print_u - print unsigned number
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_u(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int len = 0;
	char *u = convert(x, 10);

	if (u == NULL)
		return (0);
	while (*u != ''\0)
	{
		_putchar(*u);
		u++;
		++len;
	}
	return (len);
}
