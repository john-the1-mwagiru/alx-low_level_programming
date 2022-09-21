/*
 * File: 2-strlen.c
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
int length = 0;

for (int i = 0; str[i] != '\0'; i++)
{
	length++;
	return (length);
}
}
