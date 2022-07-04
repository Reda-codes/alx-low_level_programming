#include "dog.h"


/**
*_strlen - the length of a string
*@str: string input
*Return: length of str
*/
int _strlen(char *str)
{
	int l = 0;

	while (str)
	l++;

	return (l);
}

/**
*_strcopy - copies source string to destination
*@dest:new strng
*@src: source string
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] ; i++)
	dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (puppy->name == NULL)
		free(puppy);
		return (NULL);

	puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (puppy->owner == NULL)
		free(puppy->name);
		free(puppy);
		return (NULL);

	puppy->name = _strcopy(puppy->name, name);
	puppy->age = age;
	puppy->owner = _strcopy(puppy->owner, owner);

	return (puppy);
}

