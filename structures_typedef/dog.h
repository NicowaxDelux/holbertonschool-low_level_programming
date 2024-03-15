#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - type struct
  *
  *@name: name of the dog
  *@age: age of the dog
  *@owner: dog owner´s
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

int _strlen(char *str);
char *_strcopy(char *dest, char *src);



#endif
