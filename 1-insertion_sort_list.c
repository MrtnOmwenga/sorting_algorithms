#include "sort.h"

/**
 *insertion_sort_list- Insertion sort
 *
 *@list: List to sort
 *
 */

void insertion_sort_list(listint_t **list)
{
  listint_t *curr, *tmp, *p;
  if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

  curr = (*list)->next;
  while (curr != NULL) {
    tmp = curr->prev;
    p = curr;

    while (tmp != NULL && tmp->n > p->n) {
      /* Swap nodes */
      p->prev = tmp->prev;
      if (p->prev != NULL)
	{
	  p->prev->next = p;
	}
      else
	{
	  *list = p;
	}
      tmp->next = p->next;
      if (tmp->next != NULL)
	{
	  tmp->next->prev = tmp;
	}
      p->next = tmp;
      tmp->prev = p;
      tmp = p->prev;
      /* Print list after each swap */
      print_list(*list);
    }
    
    curr = curr->next;
  }
}
