#include "leonard.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: string to be crypted .
 * Return: pointer to s 
 * Update V 1.0 : In this new code , i changed 2 arrays with 2 pointers, that
 * are pointed to the BASS adresses of the 2 arrays.
 * in addition to that , i assigned a pointer p to s.
 *
 */

char *leet(char *s)
{
int i, x;
int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int replacer[] = {'4', '3', '0', '7', '1'};

for (i = 0; n[i] != '\0'; i++)
{
for (x = 0; x <= 9; x++)
{
if (n[i] == find[x])
{
n[i] = replacer[x / 2];
x = 9;

}
}
}
return (n);
}

