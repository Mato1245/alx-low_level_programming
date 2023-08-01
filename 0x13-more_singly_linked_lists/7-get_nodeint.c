
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
{
return (NULL);
}

i = 0;

while (i != index)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
i += 1;
}

if (head == NULL)
{
return (NULL);
}

return (head);
}
