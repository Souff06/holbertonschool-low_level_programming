#include "lists.h"
/**
 * add_node - add new node in the beginning of the list
 * @head: a pointer to a list_t pointer
 * @str:  a constant pointer to a string
 * Return: adress of the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i, count = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	for (i = 0; str[i] != 0; i++)
		count++;
	new_node->len = count;

	return (new_node);
}
