#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define NULO NULL
/**
 * struct formats - Struct
 * @arg: Char pointer
 * @f: The function associated
 */
typedef struct formats
{
	char arg;
	int (*f)(va_list, char *, int *);
} cases;

int unsignedint(va_list argum, char *buffer, int *pos);
void hex(char c, char *buffer, int *pos);
int print_S(va_list argum, char *buffer, int *pos);
int _printf(const char *format, ...);
int print_char(va_list argum, char *buffer, int *pos);
int print_str(va_list argum, char *buffer, int *pos);
int print_pct(va_list argum, char *buffer, int *pos);
int itoaa(va_list argum, char *buffer, int *pos);
int _abs(int n);
int _isdigit(int c);
void reverse(char *buffer, int *pos, int count);
int binary(va_list argum, char *buffer, int *pos);
int (*select_function(char c))(va_list, char *, int *);
int octal(va_list argum, char *buffer, int *pos);
int hexaupper(va_list argum, char *buffer, int *pos);
int hexadown(va_list argum, char *buffer, int *pos);
void string_todown(char *buffer, int *pos, int count);
int unk(char c, char *buffer, int *pos);
int unsignedint(va_list argum, char *buffer, int *pos);

#endif
