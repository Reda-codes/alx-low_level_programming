#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog tag
 * @name: dog name
 * @age: dog age
 * @owner: The dog's owner
 *
 * Description: new type struct dog that creates a dog and
 * all its related information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
