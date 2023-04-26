#include "main.h"

/**
 * print_hex - print number in bae 16 & in lowercase
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_hex(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int len = 0;
	char *hex = convert(x, 16);

	while (*hex != '\0')
	{
		if (*hex >= 'A' && *hex <= 'F')
		{
			len += _putchar(*hex + ('a' - 'A'));
		}
		else
			len += _putchar(*hex);
		hex++;
	}
	return (len);
}
