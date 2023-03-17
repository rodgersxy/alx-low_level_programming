#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates memory block using malloc and free
 * @ptr: pointer to the previous memory block
 * @old_size: size of the old memory block
 * @new_size: the size of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_location, *new_ptr; /*char two pointers are being declared*/
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	/*If `ptr` is `NULL then the function allocates memory using `malloc`*/

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_location = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_location[i] = new_ptr[i];
	free(ptr);
	return (new_location);
}
