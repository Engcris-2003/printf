#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 * */
struct vtype
{
	char *tp;
	int (*f)(va_list);
};
typedef struct vtype v_type;

int _printf(const char *format, ...);

int _write_char(char);

void print_char(va_list valist);

void print_integer(va_list valist);

void print_string(va_list valist);

int print_percent(va_list);

int print_number(va_list);

int print_binary(va_list);

int print_reversed(va_list arg);

int rot13(va_list);

int unsigned_integer(va_list);

int print_octal(va_list list);

int print_hex(va_list list);

int print_heX(va_list list);

/*Helper functions*/
unsigned int base_len(unsigned int, int);

char *rev_string(char *);

void write_base(char *str);

char *_memcpy(char *dest, char *src, unsigned int n);

int print_unsgined_number(unsigned int);







#endif  /* _MAIN_H */
