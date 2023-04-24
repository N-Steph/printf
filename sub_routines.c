#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_str - print string to stdout
 * @str: string
 * Return: number of characters of the string
 */
int print_str(char *str)
{
	char *ptr_temp;
	int len_str;

	len_str = 0;
	ptr_temp = str;
	while (*ptr_temp != '\0')
	{
		len_str++;
		ptr_temp++;
	}
	ptr_temp -= len_str;
	write(1, ptr_temp, len_str);
	return (len_str);

}

/**
 * print_chr - print a character to stdout
 * @chr: pointer to character
 * Return: 1
 */
int print_chr(int chr)
{
	char temp_chr;

	temp_chr = chr;
	write(1, &temp_chr, 1);
	return (1);
}
