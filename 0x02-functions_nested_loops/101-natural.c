#include <stdio.h>
#include <stdlib.h>
#include "leonard.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, res;

for (i = 0; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
res += i;
printf("%d\n", res);
return (0);
}
