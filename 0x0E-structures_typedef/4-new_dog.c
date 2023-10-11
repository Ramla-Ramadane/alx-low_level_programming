#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		(*p).name = malloc(strlen(name) * sizeof(char));
		if ((*p).name == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy((*p).name, name);
		}
		(*p).age = age;
		(*p).owner = malloc(strlen((owner) + 1) * sizeof(char));
		if ((*p).owner == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy((*p).owner, owner);
		}
	}
	return (p);
}

