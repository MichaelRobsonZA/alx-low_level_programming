/* Include guard to prevent multiple inclusion of the header file */
#ifndef LISTS_H
#define LISTS_H

/* Include the necessary standard library header files */
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototype for the print_listint function */
size_t print_listint(const listint_t *h);

/* End of the include guard */
#endif /* LISTS_H */

