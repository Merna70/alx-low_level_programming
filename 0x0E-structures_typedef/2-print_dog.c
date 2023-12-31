#include "dog.h"
#include <stdio.h>

/**
 *print_dog - function prints a struct dog
 *@d: dog to print
 *
 * return: void.
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
