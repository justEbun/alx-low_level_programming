#include "dog.h"
#include <stddef.h>

/**
 * free_dog - frees dog
 * @d: pointer to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free(d->owner);
	free(d);
}
