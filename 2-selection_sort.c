#include "sort.h"

/**
 *selection_sort- Selection sort
 *
 *@array: ARray to be sorted
 *@size: Size of array
 *
 */

void selection_sort(int *array, size_t size)
{
  size_t i, j, min;
  int temp;
  for (i = 0; i < size; i++)
    {
      min = i;
      for (j = 0; j < size; j++)
	{
	  if (array[j] < array[min])
	    {
	      min = j;
	    }
	}
      if (min != i)
	{
	  temp = array[i];
	  array[i] = array[min];
	  array[min] = temp;
	  print_array(array, size);
	}
    }
}
