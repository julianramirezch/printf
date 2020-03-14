#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */
int _printf(const char *format, ...)
{
va_list arguments;
char *buffer = malloc (2048);
unsigned int cfor;
unsigned int carg;
unsigned int c = 0;
unsigned int *position;


cases print_format[] = {{"c", print_char}, {"s", print_str}, {"i", print_int},
		       {"%", print_percen}, {"d", print_decimal}, {NULL, NULL}};
position = &c;
va_start(arguments, format);
if (format == NULL)
	return (1);
cfor = 0;
carg = 0;
while (format[cfor])
{
	if (format[cfor] == '%')
	{
		cfor++;
		carg = 0;
		while (print_format[carg].arg[0])
		{
			if (format[cfor] == print_format[cfor].arg[0])
				print_format[carg].f(arguments, buffer, position);
			carg++;
		}
	}
	else
	{
		buffer[*position] = format[cfor];
		*position += 1;
	}
	cfor++;
}
write(1, buffer, *position);
free(buffer);
printf("antes de salir %d", *position);
return (*position);
}
