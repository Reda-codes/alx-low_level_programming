#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: structure type
 * @name: dog name input
 * @age: dog age input
 * @owner: dog owner input
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d.name = name;
	d.age = age;
	d.owner = owner;

	return (0);
}
