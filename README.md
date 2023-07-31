# Binary Trees Cheat Sheet

- Basic Concepts:

Binary Tree: A data structure where each node has at most two children, commonly referred to as the left child and the right child.

Root: The topmost node of the tree, which has no parent.

Parent Node: A node that has child nodes.

Child Node: A node that is connected to a parent node.

Leaf Node: A node that has no children.

Subtree: A tree formed by a node and all its descendants.


- Properties:

Binary Tree Depth/Height: The length of the longest path from the root node to any leaf node. The height of an empty tree is -1, and the height of a tree with only one node (the root) is 0.

Number of Nodes in a Binary Tree: The total count of nodes in the tree.

Number of Leaf Nodes: The count of nodes without any children.

Number of Internal Nodes: The count of nodes with at least one child.

Full Binary Tree: A binary tree in which every node has either zero or two children.

Complete Binary Tree: A binary tree in which all levels are filled except possibly the last one, and the last level is filled from left to right.

Perfect Binary Tree: A binary tree in which all levels are completely filled with nodes.


- Tree Traversal:

In-order Traversal: Visit nodes in the order: left child, current node, right child.

Pre-order Traversal: Visit nodes in the order: current node, left child, right child.

Post-order Traversal: Visit nodes in the order: left child, right child, current node.

Level-order Traversal (BFS): Visit nodes level by level, from left to right.


- Binary Search Tree (BST):

A binary tree where the value of each node in the left subtree is less than the value of its parent node, and the value of each node in the right subtree is greater than the value of its parent node.

BST operations: Insertion, Search, Deletion, Minimum, Maximum.


- Binary Tree Representation:

Linked Representation: Each node contains pointers/references to its left and right children.

Array Representation: Use an array to represent the binary tree. For a node at index i, its left child is at index 2i+1, and its right child is at index 2i+2. The root is at index 0.


- Balancing:

Balanced Binary Tree: A binary tree in which the height difference between the left and right subtrees of every node is at most 1.

AVL Tree: A self-balancing binary search tree where the height difference between the left and right subtrees of every node (balance factor) is limited to {-1, 0, 1}.


- Binary Tree Applications:

Hierarchical data representation.
Expression evaluation and parsing.
Binary Heap for efficient priority queue implementation.
Huffman coding for data compression.
