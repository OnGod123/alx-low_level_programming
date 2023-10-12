#include <stdlib.h>
#include <stdio.h>

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

