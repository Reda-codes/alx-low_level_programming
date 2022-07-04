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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
