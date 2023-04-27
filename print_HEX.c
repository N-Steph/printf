#include "main.h"
#include <stdlib.h>

/**
 * print_HEX - print number in bae 16 & in uppercase
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_HEX(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int len = 0;
	char *HEX = convert(x, 16);

	if (HEX == NULL)
		return (0);
	while (*HEX != '\0')
	{
		_putchar(*HEX);
		HEX++;
		++len;
	}
	HEX -= 63;
	free(HEX);
	return (len);
}
