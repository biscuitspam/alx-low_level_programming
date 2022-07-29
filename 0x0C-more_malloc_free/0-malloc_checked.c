#include "main.h"

/* main - Entry point
 * malloc_checked - memory allocation
 * @b: bytes allocate
 * Return : pointer
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);

	if (ptr ==  NULL)
		exit(98);

	return (ptr);
}
