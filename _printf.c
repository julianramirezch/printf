#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */
int _printf(const char *format, ...)
{
char *buffer;
buffer = malloc(2048);

va_list arguments;
unsigned int c_for = 0, c_arg = 0;
unsigned int *position = NULL;
position = malloc(sizeof(int))
* position = 0;
cases print_format[] = {{"c", print_char}, {"s", print_str}, {"i", print_int}
		       {"%", print_percen}, {"d", print_decimal}, {NULL, NULL}};

va_start(arguments, format);
if (format == NULL)
	return (1);

while (format[c_for])
{
	if (format[c_for] == '%')
	{
		c_for++;
		c_arg = 0;
		while (print_format)
		{
			if (format[c_for] == print_format[c_for].arg[0])
				print_format[c_arg].f(arguments, buffer, position);
			c_arg++;
		}
	}
	else
	{
		buffer[*position] = format[c_for];
		*position += 1;
	}
	c_for++;
}
write(1, buffer, *position);
free(buffer);
free(position);
return (*position);
}
