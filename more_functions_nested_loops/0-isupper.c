#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks for uppercase character.
 * @c: Returns 1 if c is uppercase
 * Returns: Returns 1 if c is uppercase
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return(1);
	}
	else
	{	
		_putchar(c);
		return (0);
	}


}
