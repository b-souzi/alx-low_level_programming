#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Write a function that initialize a variable of type
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 * @d: pointer of structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
