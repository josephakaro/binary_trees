#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/*
 * print_array - This prints an array of integers
 * @array: An array to be printed
 * @size: The number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/*
 * main - This the entry point
 *
 * Return: 0 on success, error when the  code on fails
 */
int main(void)
{
    heap_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);
    int *sorted;
    size_t sorted_size;

    print_array(array, n);
    tree = array_to_heap(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);
    sorted = heap_to_sorted_array(tree, &sorted_size);
    print_array(sorted, sorted_size);
    free(sorted);
    return (0);
}
