#include "main.h"
/**
  * _strspn - function that gets the length of a prefix substring
  *
  *@s: number of bytes in the initial segment
  *@accept: number bytes accept
  *Return: the number of bytes in the initial segment of s which consist
  *only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					n++;
			}
		}
		else
			return (n);
	}
	return (n);
}
