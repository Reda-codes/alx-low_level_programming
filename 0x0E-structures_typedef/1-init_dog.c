#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure type
 * @name: dog name input
 * @age: dog age input
 * @owner: dog owner input
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
