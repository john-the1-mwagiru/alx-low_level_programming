#include <stdio.h>
/**
 * main - returns alphabets letter
 * Description: 'program that prints the alphabet in lowercase,'
 * Return: always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
