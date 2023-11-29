#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/*
 * print_array - Printing an array of integers
 * @array: Array to be printed
 * @size: The  Size of the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; ++i)
        printf("(%03d)", array[i]);
    printf("\n");
}

/*
 * main - Our entry point
 * Return: 0 on success, and an erro on code failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        1, 2, 20, 21, 22, 32, 34, 47, 62, 68,
        79, 84, 87, 91, 95, 98
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = sorted_array_to_avl(array, n);
    if (!tree)
        return (1);
    print_array(array, n);
    binary_tree_print(tree);
    return (0);
}
