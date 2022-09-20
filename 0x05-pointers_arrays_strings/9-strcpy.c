#include "main.h"
/**
 * *_strcpy - function copies string pointed to
 * @dest: char pointer
 * @src: char pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pdest = dest;
	char *src1 = src;

	while (*src1 != '\0')
	{
		*pdest = *src1;
		src++;
		pdest++;
	}
	*pdest = *src1;
	return (dest);
}

