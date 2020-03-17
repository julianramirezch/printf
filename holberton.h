#ifndef HOLBERTON_H
#define HOLBERTON_H
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
<<<<<<< HEAD
int print_char(va_list argum, char *buffer, unsigned int *position);
int print_str(va_list argum, char *buffer, unsigned int *position);
int print_pct(va_list argum, char *buffer, unsigned int *position);
int itoaa(va_list arguments, char* buffer, unsigned int *position);
=======
int print_char(va_list argum, char *buffer, int *pos, int *len);
int print_str(va_list argum, char *buffer, int *pos, int *len);
int pc(va_list argum, char *buffer, int *pos, int *len);
int it(va_list argum, char *buffer, int *pos, int *len);
>>>>>>> d282d57a9f4e77ad822d5ddd04a4b930f603e3b5
int _abs(int n);
<<<<<<< HEAD
void reverse(char *buffer, unsigned int *position, int count, int negative);

=======
void reverse(char *buffer, int *pos, int count);
int (*select_function(char c))(va_list, char *, int *, int *);
>>>>>>> 901cfd7b8472e8447b6309d5b91573bd652425e9

#endif
