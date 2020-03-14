#include "holberton.h"

/**
 * get_function - select the function passed in the printf
 * @percent: is the operator passed into the format as a argument to the program
 *
 */
void (*get_function(char *percent))(int, int)
{
	functions argumentList[] = {
		{"c", op_mod},
		{"s", op_mod},
/*{"d", op_mod},
  {"i", op_mod},
  {"b", op_mod},
  {"u", op_mod},
  {"o", op_mod},
  {"x", op_mod},
  {"X", op_mod},
  {"S", op_mod},
  {"p", op_mod},
  {"+", op_mod},
  {"#", op_mod},
  {"l", op_mod},
  {"h", op_mod},
  {"0", op_mod},
  {"-", op_mod},
  {"r", op_mod},
  {"R", op_mod},
*/{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*percent == *(argumentList[i].pstring))
			return (argumentList[i].pfn);
		i++;
	}
}
