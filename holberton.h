#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Aca van las librerias*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Aca va la estructura*/
typedef struct structuraDeLasFunciones
{
	char *pstring;
	void (*pfn)();
}functions;

/* Aca va los prototipos*/

int _printf(const char *format, ...);
int _putchar(char c);

/* char* itoa(int value, char* buffer, int base); */


#endif /* HOLBERTON_H */
