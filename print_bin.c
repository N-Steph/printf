#include "main.h"
#include <stdlib.h>

/**
 * print_bin - print binary number
 * @args: list of variable arguments
 *
 * Return: number of char printed
 *
 */
int print_bin(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int len = 0;
	char *result = convert(x, 2);
	char *ptr_temp = result;

	if (result == NULL)
		return (0);
	while (*result != '\0')
	{
		_putchar(*result);
		result++;
		++len;
	}
	free(ptr_temp);
	return (len);
}
