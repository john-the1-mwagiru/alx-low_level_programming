#include <stdio.h>
/**
 * memset -  fills memory with a constant byte.
 * b: replaces all characters in the string.
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int length = 0;
	int measure;

	for (int l = 0; s[l] != '\0'; l++)
	{
		 measure = length ++;
	}
	for (int n = 0; n < measure; n++)
	{
		s[n] = 'b';
	}
	return (s);
}
