#include "main.h"

/**
 * convert - convert a number in any base
 * @num: the number
 * @base: the base
 *
 * Return: a pointer to the number in desired base
 */
char *convert(unsigned int num, int base)
{
	char *digits = "0123456789ABCDEF";
	char *result = (char *)malloc(sizeof(char) * 64);
	char *ptr = &result[63];

	*ptr = '\0';
	if (result == NULL)
		return (0);
	do {
		*--ptr = digits[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
