#include "holberton.h"

/**
 * _abs - the function return always a positive numbers
 * @n: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

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
<<<<<<< HEAD

<<<<<<< HEAD
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
=======
void reverse(char *buffer, int *position, int count)
=======
/**
 * reverse - Reverse.
 * @buffer: Buffer.
 * @pos: pointer position.
 * @count: count
 */
void reverse(char *buffer, int *pos, int count)
>>>>>>> d282d57a9f4e77ad822d5ddd04a4b930f603e3b5
{
	int inicio = *pos - count;
	int final = (*pos - 1);
	char c;

	while (final >= inicio)
	{
		c = buffer[inicio];
		buffer[inicio] = buffer[final];
		buffer[final]  = c;
		inicio++;
		final--;
<<<<<<< HEAD
		position += 1;
>>>>>>> 901cfd7b8472e8447b6309d5b91573bd652425e9
=======
		pos += 1;
>>>>>>> d282d57a9f4e77ad822d5ddd04a4b930f603e3b5
	}
}
