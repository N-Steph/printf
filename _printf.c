#include "main.h"

/**
 * _printf -  function that work like printf
 * @format: string conteining text to  print
 *
 * Return: number of char printed
 */
int _printf(const char * const format, ...)
{
	int len_str = 0;
	int i = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			len_str += get_specifier(format[i + 1], args);
		}
		else
			len_str += get(format[i]);

		++i;
	}
	va_end(args);
	return (len_str);
}
