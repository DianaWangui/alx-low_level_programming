#include "search_algos.h"
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
 * binary_search - searches for a value in a sorted array
 *                of integers using the Binary search algorithm
 * @array: array to be searched
 * @l: lower bound
 * @r: right boundary
 * @value: value to be found
 *
 * Return: -1 if not found index if found
 *
 */
int binary_search(int *array, size_t left, size_t right, int value) {
        size_t mid, i;

        if (right >= left) {
                printf("Searching in array: ");
                for (i = left; i < right; i++)
                        printf("%d, ", array[i]);
                printf("%d\n", array[i]);
                mid = (left + right) / 2;

                if (array[mid] == value)
                {
                        return (mid);
                }

                if (array[mid] < value)
                        return binary_search(array, mid + 1, right, value);

                if (array[mid] > value)
                        return binary_search(array, left, mid - 1, value);
        }
        return (-1);
}
/**
 * exponential_search - exponential search algorithim
 * @array: array to search
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of value -1 otherwise
 *
 */
 int exponential_search(int *array, size_t size, int value)
 {
         size_t i = 1;

         if (array == NULL || size == 0)
         {
                 return (-1);
         }
         if (array[0] == value)
                 return (0);

         while (i < size && array[i] <= value)
         {
                 printf("Value checked array[%lu] = [%lu]\n", i, i);
                 i *= 2;
         }
         printf("Value found between indexes [%lu] and [%lu]\n", i / 2, min(i, size - 1));

         return (binary_search(array, i/2, min(i, size - 1), value));
 }