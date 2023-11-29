## Binary Tree Data Structure and Algorithm Project


## Description
A tree is a non-linear abstract data type with a hierarchy-based structure. It consists of nodes (where the data is stored) that are connected via links. The tree data structure stems from a single node called a root node and has subtrees connected to the root.
## Installation
```bash
git clone https://github.com/josephakaro/binary_trees.git
```

```bash
cd binary_trees
```

```bash
cc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

## Usage
```bash
	root/binary_trees$ cat 0-main.c
```

```c
#include <stdlib.h>
#include "binary_trees.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
    binary_tree_t *root;

     root = binary_tree_node(NULL, 98);

        root->left = binary_tree_node(root, 12);
        root->left->left = binary_tree_node(root->left, 6);
        root->left->right = binary_tree_node(root->left, 16);

        root->right = binary_tree_node(root, 402);
        root->right->left = binary_tree_node(root->right, 256);
        root->right->right = binary_tree_node(root->right, 512);

        binary_tree_print(root);
        return (0);
    }
```

```bash
root/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
    root/binary_trees$ ./0-node
            .-------(098)-------.
    .--(012)--.         .--(402)--.
    (006)     (016)     (256)     (512)
    root/binary_trees$
```
## Authors
This project was develop by the following contributors.

- [Wamalwa Nelson](https://github.com/nelsonwamalwa)
- [Joseph Akaro](https://github.com/josephakaro)
## License

## How to Contribute

## Tests
