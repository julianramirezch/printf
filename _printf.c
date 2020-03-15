#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */
int _printf(const char *format, ...)
{
/*Validacion si para ver si hay un formato*/
	if (format == NULL)
		return (0);

	va_list arguments;
/* Asignando un puntero con un buffer principal */
	char *buffer = malloc (2048);
	if (buffer == NULL)
		return (0);

	char valor = NULL;
	int cfor = 0, carg = 0, positionBuffer = 0;

	int *position = malloc(sizeof (int));
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
