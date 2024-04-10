#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found
 *         or if array is NULL.
 */
int linear_search(const int *array, size_t size, int value)
{
    size_t i;
    
    if (array == NULL)  // Check for null array
        return -1;
    
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;  // Return index if value found
    }

    return -1;  // Value not found

    
}
