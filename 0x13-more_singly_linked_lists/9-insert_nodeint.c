#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @indx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *h;

	h = *head;

	if (indx != 0)
	{
		for (i = 0; i < indx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && indx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (indx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = h->next;
		h->next = newnode;
	}

	return (newnode);
}
