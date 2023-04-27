#include "main.h"
#include <stdlib.h>

/**
 * print_int - print decimal & integer
 * @args: list of variable arguments
 *
 * Return: len (number of char printed)
 */
int print_int(va_list args)
{
	int x = va_arg(args, int);
	int len = 0;
	char *result = convert(_abs(x), 10);

	if (result == NULL)
		return (0);

	if (x < 0)
	{
		x = -x;
		_putchar('-');
		len += 1;
	}
	while (*result != '\0')
	{
		_putchar(*result);
		result++;
		++len;
	}
	result -= 63;
	free(result);
	return (len);
}
