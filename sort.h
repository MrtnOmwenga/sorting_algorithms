#ifndef SORT_H
#define SORT_H

/* Packages */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/* Structures */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/* Prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

/* Utilities */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);

#endif
