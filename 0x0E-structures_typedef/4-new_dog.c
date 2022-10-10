#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *n, *o;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));

	if (bingo == NULL)
		return (NULL);

	n = malloc(sizeof(name));
	strcpy(n, name);
	if (n == NULL)
	{
		free(n);
		free(bingo);
		return (NULL);
	}
	(*bingo).name = n;

	(*bingo).age = age;

	o = malloc(sizeof(owner));
	strcpy(o, owner);
	if (o == NULL)
	{
		free(o);
		free(bingo);
		return (NULL);
	}
	(*bingo).owner = o;

	return (bingo);
}
