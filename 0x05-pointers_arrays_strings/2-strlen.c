/*
 * File: 2-strlen.c
 */

#include "main.h"

/**
 * 2-strlen.c - returns the length of a string.
 * @s: character to be rested.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
 
