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
	while (str[cont])
	{
		buffer[*position] = str[cont];
		*position += 1;
		cont++;
	}
}
void print_percen(va_list arguments __attribute__((unused)), char *buffer, unsigned int *position)
{
	buffer[*position] = '%';
	*position += 1;
}
