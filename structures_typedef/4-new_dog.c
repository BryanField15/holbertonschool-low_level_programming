#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a new string which is a duplicate str
 *@str: string to be duplicated
 *Return: NULL if str NULL or  insufficient mem. Ptr to dup on success.
 */
char *_strdup(char *str)
{
	char *s;
	char *dup;
	int i;
	int j;

	s = str;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}

	dup = malloc(i + 1);
	j = 0;
	i = 0;

	while  (s[i] != '\0')
	{
		if (dup == NULL)
		{
			return (NULL);
		}
		dup[j] = s[i];
		i = i + 1;
		j = j + 1;
	}
	dup[j] = '\0';
	return (dup);
}

/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	char *name_dup;
	char *owner_dup;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}

	name_dup = _strdup(name);
	if (name_dup == NULL && name != NULL)
	{
		free(name_dup);
		free(puppy);
		return (NULL);
	}

	owner_dup = _strdup(owner);
	if (owner_dup == NULL && owner != NULL)
	{
		free(name_dup);
		free(owner_dup);
		free(puppy);
		return (NULL);
	}

	puppy->name = name_dup;
	puppy->owner = owner_dup;
	puppy->age = age;

	return (puppy);
}
