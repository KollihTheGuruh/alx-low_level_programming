#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
* @h: data type listint_t double pointer of head
* Return: the size of the list that was free'd
*/
size_t free_listint_safe(listint_t **h)
{
size_t counter = 0;
listint_t *safe_node, *tmp_node;

if (!h)
return (0);

for (safe_node = *h; safe_node != NULL; safe_node = safe_node->next)
{
counter++;
tmp_node = safe_node;
free(tmp_node);

if (tmp_node < safe_node->next)
break;
}
*h = NULL;
return (counter);
}
