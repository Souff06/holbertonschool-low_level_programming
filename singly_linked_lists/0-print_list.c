#include "lists.h"
/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements in the list.
*/
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
        	printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
