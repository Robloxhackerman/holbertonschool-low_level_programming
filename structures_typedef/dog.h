#ifndef _DOG_
#define _DOG_

typedef struct dog PEPERRO;

/**
 * struct dog - a dog
 *
 * @name: name
 * @owner: owner
 * @age: age
 *
 * Description: save a dog
 */
struct dog

{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
