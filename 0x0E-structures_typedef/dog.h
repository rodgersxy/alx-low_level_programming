#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog data structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t; /*Defines new type dog_t as new name for struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
