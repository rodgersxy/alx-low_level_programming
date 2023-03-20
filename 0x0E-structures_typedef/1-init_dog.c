#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize variable of type struct dog
 * @d: struct to initialize
 * @name: The value of struct dog's name
 * @age:The value of struct Dog age
 * @owner: Dog's owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
