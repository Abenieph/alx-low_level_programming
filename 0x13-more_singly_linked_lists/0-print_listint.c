#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 
  * print_listint - prints all elements of a listint_t list.
  * @h: pointer to first element in a list.
   * Return:  number of nodes.
  */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}


