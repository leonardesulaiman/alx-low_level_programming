#include "leonard.h"

/**
 * puts - functions should print only one characterout of two
 * string with the first one
 * @str: input
 * REturn: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
