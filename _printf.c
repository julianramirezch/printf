#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */
int (*get_function(char *c, va_list arguments, char *buffer, unsigned int *position))(va_list, char *, unsigned int *);


int _printf(const char *format, ...)
{
	va_list arguments;
	char *buffer = NULL;
        int cfor = 0, positionBuffer = 0;
	unsigned int *position = NULL;
	char *valor = NULL;
/*Validacion si para ver si hay un formato*/
	if (format == NULL)
		return (0);
/* Asignando un puntero con un buffer principal */
	buffer = malloc(2048);
	if (buffer == NULL)
		return (0);

	position = malloc(sizeof (int));
	if (position == NULL)
		return (0);

	va_start(arguments, format);
	while (format[cfor])
	{
		if (format[cfor] == '%')
		{
			cfor++;
/* Se aumenta un valor para recibir el argumento */
/* Se crea el puntero para que reciba el argumento como parametro*/
			*valor = format[cfor];
			(*get_function(valor, arguments, buffer, position))
                                (arguments, buffer, position);
		}
		else
		{
			buffer[*position] = format[cfor];
			*position += 1;
		}
		cfor++;
	}

	write(1, buffer, *position);
	positionBuffer = *position;

	free(buffer);
	free(position);
	va_end(arguments);

	return (positionBuffer);
}

int (*get_function(char *c, va_list arguments, char *buffer, unsigned int *position))(va_list, char *, unsigned int *)
{
	int carg = 0;

	cases print_format[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'%', print_percen},
		{'d', print_decimal},
		{0, NULL},
	};

	while (print_format[carg].arg)
	{
/* La condicion va aumentar hasta que llegue un argumento nulo */
		if (*c == print_format[carg].arg)
		{
			print_format[carg].f(arguments,buffer, position);
			break;
		}
		carg++;
	}

	return (0);
}
