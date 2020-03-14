#include "holberton.h"

void print_char(va_list arguments, char *buffer, unsigned int *position)
{
	buffer[*position] = va_arg(arguments, int);
	*position += 1;
}

void print_str(va_list arguments, char *buffer, unsigned int *position)
{
	char *str = va_arg(arguments, char*);
	int cont = 0;
	while (str)
	{
		buffer[*position] = str[cont];
		*position += 1;
		cont++;
	}
}

void print_int(va_list arguments, char *buffer, unsigned int *position)
{
	int j = va_arg(arguments, int);
	int cont = 0;
	int copycont;
	int copyj= j;
	
	while((copyj/10) > 0)
	{
		cont++;
		copyj = copyj / 10;
	}
	cont++;
	copycont = cont;
	while (cont > 0)
	{
		buffer[*position + cont - 1] = (copyj % 10) + 48;
		cont--;
		copyj = copyj / 10;
	}
	*position += copycont;
}
void print_percen(va_list arguments __attribute__((unused)), char *buffer, unsigned int *position)
{
	buffer[*position] = '%';
	*position += 1;
}
void print_decimal(va_list arguments, char *buffer, unsigned int *position)
{
	int j = va_arg(arguments, int);
        int cont = 0;
        int copycont;
        int copyj= j;

        while((copyj/10) > 0)
        {
                cont++;
                copyj = copyj / 10;
        }
        cont++;
        copycont = cont;
        while (cont > 0)
        {
                buffer[*position + cont - 1] = (copyj % 10) + 48;
                cont--;
                copyj = copyj / 10;
        }
        *position += copycont;
}
