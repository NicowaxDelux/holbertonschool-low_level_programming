#include "dog.h"
#include "stdlib.h"

/**
  * _strlen - returns length of a string
  *
  *@str: string
  *
  *Return: returns length of string
  *
  */

int _strlen(char *str)
{
	int length = 0;

	while (str)
	{
		length++;
	}
	return (length);
}

/**
  * _strcopy - copy a string
  *
  *@dest: string copy
  *@src: string to copy
  *
  *Return: Return copied string
  */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case of failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *doggo;


	if (name == NULL || age < 0 || owner == NULL)

		return (NULL);


	doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)

		return (NULL);


	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);

	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (doggo->owner == NULL)
	{

		free(doggo->name);
		free(doggo);

		return (NULL);

	}


	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);
	return (doggo);
}
