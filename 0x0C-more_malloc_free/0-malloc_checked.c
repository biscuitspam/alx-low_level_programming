#include "main.h"
#include <stdio.h>

/* main - Entry point
 * malloc - memory allocation
 * Return : pointer
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);
	if (ptr ==  NULL)
		return (98);

	return (ptr);
}
