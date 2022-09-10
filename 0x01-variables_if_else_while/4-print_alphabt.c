#include <stdio.h>
/**
 * main -return alphabet
 * Description: 'that prints the alph in lc, a new line'
 * Return: always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
