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
	struct dog *ptr;

	ptr = d;
	(*ptrs).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
}
