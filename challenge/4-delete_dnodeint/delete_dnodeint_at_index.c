#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (*head == NULL)  /* Empty list case */
        return (-1);

    if (index == 0) {
        *head = temp->next;  /* Move head to the next node */
        if (*head != NULL)
            (*head)->prev = NULL;  /* Remove reference to the old head */
        free(temp);
        return (1);
    }

    for (i = 0; temp != NULL && i < index; i++)
        temp = temp->next;

    if (temp == NULL)  /* Index is out of range */
        return (-1);

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
    return (1);
}
