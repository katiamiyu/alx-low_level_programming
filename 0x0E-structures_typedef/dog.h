#ifndef DOG_H
#define DOG_H
/**
 * struct dog - single dog record
 *
 * @name: dog name (property 1)
 * @age: dog age (property 2)
 * @owner: owner name (property 3)
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
