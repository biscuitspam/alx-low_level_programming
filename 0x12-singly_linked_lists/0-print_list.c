#include "lists.h"
/**
<<<<<<< HEAD
 * print_list - function that prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return:
 * number of elements in the list.
=======
 * print_list - Function that prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
>>>>>>> e1d2dd2a6cc53ac351243743dc32d4280670b178
 */

size_t print_list(const list_t *h)
{
<<<<<<< HEAD
	size_t nelem;

	nelem = 0;
=======
	size_t nelem;

	nelem = 0;
>>>>>>> e1d2dd2a6cc53ac351243743dc32d4280670b178
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
<<<<<<< HEAD
			printf("[%d] %s\n", h->len, h-str);
		h = h->next;
		nelem++;
	}
	return (nelem);
=======
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
>>>>>>> e1d2dd2a6cc53ac351243743dc32d4280670b178
}
