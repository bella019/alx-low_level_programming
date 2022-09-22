#include "main.h"
/**
 * *_strcat -  function that concatenates two strings.
 * @src: char pointer
 * @dest: char pointer
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;
	int n = _strlen(src);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
/**
 * _strlen - function that returns string length
 * @s: char pointer
 * Return: length
 */
int _strlen(char *s)
{
	char *copy_s = s;
	int length = 0;

	while (*copy_s != '\0')
	{
		length++;
		copy_s++;
	}
	return (0);
}
