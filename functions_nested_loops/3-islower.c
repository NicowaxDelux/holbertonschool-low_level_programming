#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: Returns 1 if 'c' is lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
char alphabet_letter = '\0';

for (alphabet_letter = 'a'; alphabet_letter <= 'z'; alphabet_letter++)
{
if (c == alphabet_letter)
{
_putchar(c + '0');

return (1);
}
else
{
return (0);
}
}
_putchar('\n');
return (0);
}
