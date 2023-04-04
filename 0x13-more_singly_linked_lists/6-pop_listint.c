#include "lists.h"

/**
* pop_listint - pop the first value out
* @head: the list
* Return: int value
*/
int pop_listint(listint_t **head)
{
int i = 0;
listint_t *temp;

for (temp = *head; temp != NULL; temp = temp->next)
{
if (temp == *head)
{
i = temp->n;
*head = temp->next;
free(temp);
break;
}
}

return (i);
}
