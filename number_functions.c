#include "holberton.h"

/**
<<<<<<< HEAD:numbers_functions.c
 * _abs - the function return always a positive numbers
 * @n: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
=======
 * itoaa - Integer to Char.
 * @argum: va_list
 * @buffer: buffer.
 * @len: Lenght
 * @pos: Position.
 * Return: Pointer.
 */
int itoaa(va_list argum, char *buffer, int *pos, int *len __attribute__((unused)))
{
	int numbers = 0, count = 0;
	int n = va_arg(argum, int);

	numbers = abs(n);
>>>>>>> 901cfd7b8472e8447b6309d5b91573bd652425e9:number_functions.c

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n = n * -1);
	}
	return (n);
}

void reverse(char *buffer, unsigned int *position, int count, int negative)
{
	if (negative == 0)
	{
		unsigned int inicio = *position - count;
		unsigned int final = (*position - 1);
		char c;

		while (final >= *position)
		{
			c = buffer[inicio];
			buffer[inicio] = buffer[final];
			buffer[final]  = c;
			final--;
			position += 1;
		}
	}
	else
	{
<<<<<<< HEAD:numbers_functions.c
		unsigned int inicio = *position - count;
		unsigned int final = (*position - 1);
		char c;

		while (final >= inicio)
		{
			c = buffer[inicio];
			buffer[inicio] = buffer[final];
			buffer[final]  = c;
			inicio++;
			final--;
			position += 1;
		}
	}
=======
		buffer[*pos] = '-';
		*pos += 1;
		count++;
	}
	reverse(buffer, pos, count);
	return (*pos);
>>>>>>> 901cfd7b8472e8447b6309d5b91573bd652425e9:number_functions.c
}
