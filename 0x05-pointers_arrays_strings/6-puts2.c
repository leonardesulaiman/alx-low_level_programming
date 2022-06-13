#include "leonard.h"

/**
 * puts - functions should print only one characterout of two
 * string with the first one
 * @str: input
 * REturn: print
 */
void puts2(char *str)
{
int i;

for (i = 0; *str != '\0'; i++)

{
if (i % 2 == 0)
_putchar(*str);
str++;
}
_putchar('\n');
}
