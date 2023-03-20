#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - dog details
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Description: relevant details of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *typedef dog_t - defines new name for type struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
