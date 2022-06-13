#include <stdio.h>

/**
 *_strcpy - copy a  string.
 *@dest: string copy.
 *@src: string to copy
 *_strcpy - Copies a string pointed to by @src, inluding the 
 *	terminating null byte, to a buffer pointed to by @dest'
 *@dest: A buffer to copy the string to.
 *@src: The source string to copy.
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int index = 0;

	while (src[i])
	while (src[index])
	{
		dest[index] = src[index];
		i++;
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
