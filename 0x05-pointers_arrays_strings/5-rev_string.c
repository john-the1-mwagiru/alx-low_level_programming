ii/*
 * File: 5-rev_string.c
 */

#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;

	for (int i = 0; i < middle; i++)
{
	temp = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
}
}
