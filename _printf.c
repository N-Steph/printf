#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - print format string
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int len_str = 0;
	char current_character;
	va_list ap;

	va_start(ap, format);
	if (format == 0)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			current_character = *format;
			switch (current_character)
			{
				case 'c':
					len_str += print_chr(va_arg(ap, unsigned int));
					break;
				case 's':
					len_str += print_str(va_arg(ap, char *));
					break;
				case '%':
					len_str += write(1, format, 1);
					break;
				default:
					len_str += print_ordinary_char(format);
			}
		}
		else
		{
			len_str += write(1, format, 1);
		}
		format++;
	}
	va_end(ap);
	return (len_str);
}
