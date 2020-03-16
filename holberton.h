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
	int (*f)(va_list, char *, int *, int *);
} cases;

int _printf(const char *format, ...);
int print_char(va_list argum, char *buffer, int *pos, int *len);
int print_str(va_list argum, char *buffer, int *pos, int *len);
int pc(va_list argum, char *buffer, int *pos, int *len);
int itoaa(va_list argum, char *buffer, int *pos, int *len);
int _abs(int n);
void reverse(char *buffer, int *pos, int count);
int (*select_function(char c))(va_list, char *, int *, int *);

#endif
