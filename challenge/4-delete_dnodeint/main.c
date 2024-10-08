#include "lists.h"
#include <stdio.h>

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);  /* Delete node at index 5 */
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);  /* Delete head */
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);  /* Delete new head */
    print_dlistint(head);
    printf("-----------------\n");
    free_dlistint(head);
    head = NULL;
    return (0);
}
