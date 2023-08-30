#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - it is a function that free the memory
 * @head: a pointer to a pointer to head
 * @index: from the node the deletion start
 * 
 * Return: an interger
 */

int delete_nodeint_at_index(struct listint_s **head, unsigned int index)
{
if (*head == NULL)
return (-1);

if (index == 0)
{
struct listint_s *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

struct listint_s *current = *head, *prev = NULL;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
{
prev->next = current->next;
free(current);
return (1);
}

prev = current;
current = current->next;
i++;
}

return (-1);
}

