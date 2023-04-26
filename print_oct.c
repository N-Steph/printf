#include "main.h"

/**
 * print_oct - print number in base 8
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_oct(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int len = 0;
	char *oct = convert(x, 8);

	if (oct == NULL)
		return (0);
	while (*oct != '\0')
	{
		_putchar(*oct);
		oct++;
		++len;
	}
	return (len);
}
