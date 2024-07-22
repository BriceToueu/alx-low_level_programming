#include "dog.h"

#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* new_dog - function that create new dog
* @name: name of dog
* @age: age of new dog
* @owner: owner of new dog
*
* Description: function to create a new dog. Store copy of name & owner
* Return: ptr, null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	int the_name, the_owner;

	dog_t *dogdog = malloc(sizeof(dog_t));

	if (dogdog == NULL)
		return (NULL);
	_strlen(name);
	the_name = _strlen(name);
	new_name = malloc((the_name + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(dogdog);
		return (NULL);
	}
	_strcpy(new_name, name);

	_strlen(owner);
	the_owner = _strlen(owner);
	new_owner = malloc((the_owner + 1) * sizeof(char));
	if (new_owner == NULL)
	{
		free(new_name);
		free(dogdog);
		return (NULL);
	}
	_strcpy(new_owner, owner);

	dogdog->name = new_name;
	dogdog->age = age;
	dogdog->owner = new_owner;

	return (dogdog);
}

/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
/**
* _strcpy - function
* @src: copy from
* @dest: copy to
*
* Description: copies strng pnted by src to dest with null
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
