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

/**
 * reverse - reverse function.
 * @buffer: buffer
 * @pos: pointer position.
 * @count: count
 */
void reverse(char *buffer, int *pos, int count)
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
		pos += 1;
	}
}
