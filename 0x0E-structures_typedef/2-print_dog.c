#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else if ((*d).name == NULL)
	{
		printf("(nil)\n");
	}
	else if ((*d).owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
