#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a variable of type struct dog
  *
  * struct dog - dates of dog
  *
  *@d: variable to return
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner´s dog
  *
  *Return: return d values
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
