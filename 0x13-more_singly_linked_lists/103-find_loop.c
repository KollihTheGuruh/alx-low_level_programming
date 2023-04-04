#include "lists.h"

/**
* find_listint_loop - find the loop in a linked list
* @head: data type listint_t double pointer of head
* Return: the loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *first_loop = head;
listint_t *second_loop = head;

if (head == NULL)
return  (NULL);
if (head == head->next)
return (head);
for (; first_loop != NULL; first_loop = first_loop->next)
{
for (second_loop = head; second_loop != first_loop;
	second_loop = second_loop->next)
{
if (second_loop == first_loop->next)
{
return (second_loop);
}
}
}
return (first_loop);
}
