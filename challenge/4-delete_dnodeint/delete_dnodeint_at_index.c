#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the pointer of the head of the list
 * @index: Index of the node that should be deleted (starting from 0)
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (*head == NULL)  /* Empty list case */
        return (-1);

    /* If we're deleting the head node */
    if (index == 0)
    {
        *head = temp->next;  /* Move head to the next node */
        if (*head != NULL)
            (*head)->prev = NULL;  /* Remove reference to the old head */
        free(temp);  /* Free the old head */
        return (1);
    }

    /* Traverse the list to find the node at the given index */
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    /* If we reach the end without finding the node */
    if (temp == NULL)
        return (-1);

    /* Adjust pointers to bypass the node at index */
    if (temp->next != NULL)  /* Not the last node */
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)  /* Not the first node */
        temp->prev->next = temp->next;

    free(temp);  /* Free the node */
    return (1);
}
