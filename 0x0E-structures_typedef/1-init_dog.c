#include "dog.h"

/**
 *init_dog - function initialize a variable of type struct dog
 *@d: the init
 *@name: dog's name
 *@owner: dog's owner
 *@age: dog's age
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
