#include "lists.h"
/**
 * * add_nodeint - add new node at index 0 of list
 * * @head: pointer to the 1st node of the linked list
 * * @n: nth elemten
 * * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
