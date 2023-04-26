#include "main.h"

/**
 * print_str - print string
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int print_str(va_list args)
{
	char *s;
	int len;

	len = 0;
	s = va_arg(args, char*);
	if (s == NULL)
	{
		len += write(1, "(null)", 6);
	}
	else
	{
		while (*s != '\0')
		{
			len += _putchar(*s);
			++s;
		}
	}
	return (len);
}
