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
 * reverse - revers
 * @buffer: Buffer
 * @position: Position
 * @count: Conut
 * @negative: Negative
 */
void reverse(char *buffer, int *position, int count, int negative)
{
	if (negative == 0)
	{
		int inicio = *position - count;
		int final = (*position - 1);
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
		int inicio = *position - count;
		int final = (*position - 1);
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
}
