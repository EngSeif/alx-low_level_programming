#ifndef DOGGE_H
#define DOGGE_H
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner : third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
