#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @C: The character to print 
 *
 * Return: on success 1.
 * ON error, -1 is returned, and errno is set appropriattely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
