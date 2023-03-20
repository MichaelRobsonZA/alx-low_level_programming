#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct containing information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct is used to store information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
	 * dog_t - typedef for struct dog
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);



	#endif /* DOG_H */

