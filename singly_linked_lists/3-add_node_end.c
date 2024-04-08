#include "lists.h"
/**
 * add_node_end - Add node at the node the list
 * @head: a pointer to a list_t pointer
 * @str: a constant pointer to a string
 * Return: The new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(*new_node));
	char *str_copy;
	int i, count = 0;

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
	{
		return (NULL);
	}

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	for (i = 0; str[i] != 0; i++)
		count++;
	new_node->len = count;

	return (new_node);
}
