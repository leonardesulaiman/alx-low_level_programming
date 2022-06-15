#include "leonard.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer pointed to the variable s , of type character
 * Return: Pointer P , pointed to the variable s of type char.
 * Update V2.0 : using Pointers instead of arrays to minimize the use
 * of allocated memory and to improve the esthetic and simplicity of the code.
 *
 */

char *rot13(char *s)
{

int i = 0, i2 = 0;

char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + i) != 0)
{
for (i2 = 0; i2 <= 52; i2++)
{
if (*(s + i) == alpha[i2])
{
*(s + i) = alpha2[i2];
break;
}
}
i++;
}
return (s);
}
