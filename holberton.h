#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct formats - Struct
 * @arg: Char pointer
 * @f: The function associated
 */

typedef struct formats
{
	char arg;
	void (*f)(va_list, char *, unsigned int *);
} cases;

int _printf(const char *format, ...);
void print_char(va_list argum, char *buffer, unsigned int *posi);
void print_str(va_list argum, char *buffer, unsigned int *posi);
void print_int(va_list argum, char *buffer, unsigned int *posi);
void print_pct(va_list argum, char *buffer, unsigned int *posi);
void print_decimal(va_list argum, char *buffer, unsigned int *posi);

#endif
