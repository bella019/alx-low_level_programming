#include "main.h"
/**
 * _strncpy - copies at most an inputed number of bytes
 * @dest: the buffer storing string
 * @src: the sorce strig
 * @n: the max number of bytes to be copied
 * Return: pointer resulting in dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
