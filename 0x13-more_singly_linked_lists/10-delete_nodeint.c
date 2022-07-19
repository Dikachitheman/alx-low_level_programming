#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index "index" of a "listint_t"
 * linked list.
 * @head: pointer to head pointer of linked list
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	if (*head == NULL)

		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		i++;

	}



	if (i != (index - 1) || temp->next == NULL)
		return (-1);

	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);

	return (1);
}
