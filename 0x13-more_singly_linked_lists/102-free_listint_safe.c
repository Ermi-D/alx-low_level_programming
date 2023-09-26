#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head node.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *hptr, *newnode, *add;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->p = (void *)*h;
		newnode->next = hptr;
		hptr = newnode;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nodes);
}
