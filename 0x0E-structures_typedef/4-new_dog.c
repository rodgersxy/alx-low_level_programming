#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of the dog field
 * @age: age of the dog field
 * @owner: owner of the dog value field
 * Return: new struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
