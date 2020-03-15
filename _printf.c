#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */
int _printf(const char *format, ...)
{
if (format == NULL)
	return (1);
va_list argum;
char *buffer = malloc(2048);
unsigned int cfor = 0;
unsigned int carg = 0;
unsigned int c = 0;
unsigned int *posi;

cases print_format[] = {{'c', print_char}, {'s', print_str}, {'i', print_int},
			{'%', print_pct}, {'d', print_decimal}, {0, NULL}};
posi = &c;
va_start(argum, format);
while (format && format[cfor])
{
	if (format[cfor] == '%')
	{
		cfor++;
		carg = 0;
		while (print_format[carg].arg)
		{
			if (format[cfor] == print_format[carg].arg)
			{
				print_format[carg].f(argum, buffer, posi);
				break;
			}
			carg++;
		}
	}
	else
	{
		buffer[*posi] = format[cfor];
		*posi += 1;
	}
	cfor++;
}
write(1, buffer, *posi);
va_end(argum);
free(buffer);
return (*posi);
}
