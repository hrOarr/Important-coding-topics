# Important-coding-topics
It includes almost all basic topics of coding in C/C++

## Binary Tree
### Full binary tree
A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.
### Perfect binary tree
A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.
### Complete binary tree
A complete binary tree is a binary tree in which all the levels are completely filled except possibly the lowest one, which is filled from the left.
### Balanced binary tree
A balanced binary tree, also referred to as a height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.

## Linked list
A linked list data structure includes a series of connected nodes.Here, each node store the data and the address of the next node.

### applications:
* Dynamic memory allocation
* Implemented in stack and queue
* In undo functionality of softwares
* Hash tables, Graphs

#### HashTable collision can be solved by: -
* chaining or closed-addressing: this technique is generally used when collision occurs.
* open-addressing: this contains linear probing,quadratic probing,double hashing etc.

## Pointer
### Dynamic memory allocation
* To allocate memory dynamically, library functions are malloc(), calloc(), realloc() and free() are used.
*These functions are defined in the <stdlib.h> header file.

* The malloc() function reserves a block of memory of the specified number of bytes. It returns a pointer, but it returns NULL pointer when failed.

* The malloc() function allocates memory and leaves the memory uninitialized, whereas the calloc() function allocates memory and initializes all bits to zero.

* If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using the realloc() function.

### importance of pointer
* Pointers provide a way to return more than one value to the functions.
* Reduces the storage space and complexity of the program.
* Reduces the execution time of the program.
* Provides an alternate way to access array elements.
