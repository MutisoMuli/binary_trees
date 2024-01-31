#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Prototypes for binary_tree_print.c */
void binary_tree_print(const binary_tree_t *);

/* Prototypes for 0-binary_tree_node.c */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Prototypes for 1-binary_tree_insert_left.c */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Prototypes for 2-binary_tree_insert_right.c */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Prototypes for 3-binary_tree_delete.c */
void binary_tree_delete(binary_tree_t *tree);

/* Prototypes for 4-binary_tree_is_leaf.c */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Prototypes for 5-binary_tree_is_root.c */
int binary_tree_is_root(const binary_tree_t *node);

/* Prototypes for 6-binary_tree_preorder.c */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Prototypes for 7-binary_tree_inorder.c */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Prototypes for 8-binary_tree_postorder.c */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Prototypes for 9-binary_tree_height.c */
size_t binary_tree_height(const binary_tree_t *tree);

/* Prototypes for 10-binary_tree_depth.c */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Prototypes for 11-binary_tree_size.c */
size_t binary_tree_size(const binary_tree_t *tree);

/* Prototypes for 12-binary_tree_leaves.c */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Prototypes for 13-binary_tree_nodes.c */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Prototypes for 14-binary_tree_balance.c */
int binary_tree_balance(const binary_tree_t *tree);

/* Prototypes for 15-binary_tree_is_full.c */
int binary_tree_is_full(const binary_tree_t *tree);

/* Prototypes for 16-binary_tree_is_perfect.c */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Prototypes for 17-binary_tree_sibling.c */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Prototypes for 18-binary_tree_uncle.c */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */


/* Prototypes for 13-binary_tree_nodes.c */









#endif

