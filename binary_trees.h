#ifndef BINARY_TREES
#define BINARY_TREES

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

void binary_tree_print(const binary_tree_t *);

/* -- Binary Search Tree -- */
typedef struct binary_tree_s bst_t;

/* -- AVL Tree --*/
typedef struct binary_tree_s avl_t;

/* -- Max Binary Heap --*/
typedef struct binary_tree_s heap_t;


/* -- Function Prototypes -- */
/* -- Mandatory Tasks -- */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* _BINARY_TREES_H_ */