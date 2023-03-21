#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of the dog field
 * @age: age of the dog field
 * @owner: owner of the dog value field
 * Return: newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = 0, owner_len = 0;

	for (name_len = 0; name && *(name + name_len) != '\0'; name_len++)
		;
	for (owner_len = 0; owner && *(owner + owner_len) != '\0'; owner_len++)
		;
	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		dog->name = malloc(sizeof(char) * (name_len + 1));
		if (!dog->name)
		{
			free(dog);
			return (NULL);
		}
		for (name_len = 0; name && *(name + name_len) != '\0'; name_len++)
			*(dog->name + name_len) = *(name + name_len);
		*(dog->name + name_len) = '\0';
		dog->age = age;
		dog->owner = malloc(sizeof(char) * (owner_len + 1));
		if (!dog->owner)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		for (owner_len = 0; owner && *(owner + owner_len) != '\0'; owner_len++)
			*(dog->owner + owner_len) = *(owner + owner_len);
		*(dog->owner + owner_len) = '\0';
	}
	return (dog);
}
