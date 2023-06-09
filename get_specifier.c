#include "main.h"

/**
 * get_specifier - switch between char specifier
 * and print according to it
 * @chr: char specifier
 * @args: list of variable arguments
 *
 * Return: number of char printed
 */
int get_specifier(char chr, va_list args)
{
	int len = 0;
/**
 * struct _case - List of all differents cases
 * @c: char
 * @print: function
 */
	struct _case
	{
		char c;
		int (*print)(va_list args);
	};
	struct _case all[] = {
		{'c', print_chr}, {'s', print_str}, {'d', print_int}, {'i', print_int},
		{'b', print_bin}, {'u', print_u}, {'o', print_oct}, {'x', print_hex},
		{'X', print_HEX}
	};
	int j = 0;

	if (chr == '%')
	{
		len += _putchar('%');
		return (len);
	}
	while (j < 9)
	{
		if (all[j].c == chr)
		{
			len += all[j].print(args);
			return (len);
		}
		++j;
		if (j == 9)
		{
			len += _putchar('%');
			len += _putchar(chr);
			return (len);
		}
	}
	return (0);
}
