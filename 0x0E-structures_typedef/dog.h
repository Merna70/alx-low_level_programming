#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct
 *@name: dog's name
 *@owner: dog's owner
 *@age: dog's age
*/

struct dog
{
	char *name;
	char *owner;
	float age;

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
