#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen_recursion - function
*
* @s: the chaine
* Return: Always 0.
*/

int _strlen_recursion(const char *s)
{

if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
* add_node_end - a function ...
* @head: the list
* @str: the chaine
*
* Return: 1 or 0
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *ptr = *head;

new =  malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = _strlen_recursion(str);
new->next = NULL;

if (ptr == NULL)
{
*head = new;
return (*head);
}
while (ptr->next != NULL)
ptr = ptr->next;
ptr->next = new;
return (new);
}
