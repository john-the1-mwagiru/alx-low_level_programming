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
	int index = 0;

	while(str[index] != '\0')
	{
	index++;
	}

		return (index);
}
