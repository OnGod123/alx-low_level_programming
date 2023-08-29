#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_create = malloc(sizeof(listint_t));

if (new_create == NULL)
{
return (NULL);
}
new_create->n = n;
new_create->next = *head;
*head = new_create;

return (*head);
}


