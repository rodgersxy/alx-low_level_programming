#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free a dog struct
 * @d: pointer to struct to free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
