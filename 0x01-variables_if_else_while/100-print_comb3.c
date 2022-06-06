#include <stdio.h>

/**
 * main - Prints number between 00 to 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,e;

	i = 48;
	e = 48;

	while (i < 48)
	{
		i = 48;
		while (e != i && e < i)
		{	
			
			putcher(e);
			putcher(i);
			if (i == 57 && e == 56)
			{
			break;
			}
			putcher(',');
			putcher(' ');

		}
		i++;

	}
	e++;

}
putcher('\n');
return (0);
}
