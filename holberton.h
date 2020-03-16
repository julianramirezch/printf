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
	int (*f)(va_list, char * , unsigned int *);
} cases;

int _printf(const char *format, ...);
int print_char(va_list argum, char *buffer, unsigned int *position);
int print_str(va_list argum, char *buffer, unsigned int *position);
int print_pct(va_list argum, char *buffer, unsigned int *position);
int itoaa(va_list arguments, char* buffer, unsigned int *position);
int _abs(int n);
void reverse(char *buffer, unsigned int *position, int count, int negative);

#endif
