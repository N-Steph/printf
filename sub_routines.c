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
int print_chr(unsigned int chr)
{
	char temp_chr;

	temp_chr = chr;
	write(1, &temp_chr, 1);
	return (1);
}

/**
 * print_b - print integer in binary
 * @b: integer to convert to binary
 *
 * Return: number o 0s and 1s printed
 */
int print_b(unsigned int b)
{
	unsigned int counter;
	unsigned int i;
	unsigned int *ptr_b;
	unsigned int remainder;
	char c;

	i = b;
	counter = 0;
	if (i == 0)
	{
		c = 48;
		write(1, &c, 1);
		return (1);
	}
	while (i != 0)
	{
		i = i / 2;
		counter++;
	}
	ptr_b = malloc(sizeof(unsigned int) * counter);
	while (b != 0)
	{
		remainder = b % 2;
		b = b / 2;
		*ptr_b = remainder;
		ptr_b++;
	}
	ptr_b--;
	i = counter;
	while (i > 0)
	{
		c = 48 + *ptr_b;
		write(1, &c, 1);
		ptr_b--;
		i--;
	}
	ptr_b++;
	free(ptr_b);
	return (counter);
}

/**
 * print_percent - print %
 * @chr: character
 *
 * Return: 1 character printed
 */
int print_percent(unsigned int chr)
{
	char c;

	c = chr;
	return (write(1, &c, 1));
}

/**
 * print_ordinary_char - print character
 * @ch: pointer to character 
 *
 * Return: number of character printed
 */
int print_ordinary_char(const char *ch)
{
	int num_ch;

	num_ch = 0;
	ch--;
	num_ch += write(1, ch, 1);
	ch++;
	num_ch += write(1, ch, 1);
	return (num_ch);
}
