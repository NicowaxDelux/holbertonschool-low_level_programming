#include "main.h"
/**
  *_strstr - function finds the first occurrence of the substring needle
  *in the string haystack. The terminating null bytes (\0) are not compared
  *
  *@haystack: String
  *@needle: finds the first occurrence of the substring
  *
  *Return: Returns a pointer to the beginning of the located substring,
  *or NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{

			if ((needle[i] == haystack[i]) != '\0')

				return (needle);
		}
		haystack++;
	}
	return (NULL);
}
