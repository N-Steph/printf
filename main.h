#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int print_b(unsigned int);
int print_percent(unsigned int);
int print_chr(unsigned int);
int print_str(char *);
int print_ordinary_char(const char *);
/**
 * struct format_spec1 - new datatype
 * @c: character
 * @func: function pointer
 */
struct format_spec1
{
	char c;
	int (*func)(unsigned int);
};
typedef int (*func_ptr)(unsigned int);
func_ptr prototype02(char);
#endif /* MAIN_H */
