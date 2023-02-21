#include "sort.h"

/**
* bubble_sort - sorts an array using bubble
* @array: array to sort
* @size: size of an array
*/
void bubble_sort(int *array, size_t size)
{
int i, j, hold;
for (j = 0; j < size - 1; j++)
{
for (i = 0; i < size - 1 - j; i++)
{
if (array[i + 1] < array[i])
{
hold = array[i];
array[i] = array[i + 1];
array[i + 1] = hold;
print_array(array, size);
}

}
}
}
