#include "main.h"
/**
 * cap_string - Cptilizes words of a string
 * @str: string to be capitlized
 * Return: char *
 */
char *cap_string(char *)
{
	int count;
	int count2;
	char *x = ".,{}()\n\t\"?!";

	for (count = 0; *(n + count) != '\0'; count++)
	{
		for (count2 = 0; *(x + count2) != '\0'; count2++)
		{
			if (*(n + count - 1) == *(x + count2) && *(n + count) >=
			'a' && *(n + count) <= 'z')
			{
				*(n + count) = ('A' - 'a') + *(n + count);
			}
			else if ((count == 0) && *(n + count) >= 'a' && *(n + count) <= 'z')
			{
				*(n + count) = ('A' - 'a') + *(n + count);
			}
		}
	}
	return (0);
}
