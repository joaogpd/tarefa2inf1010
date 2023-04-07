#ifndef EXECUTION_H
#define EXECUTION_H

typedef struct bintree BinTree;
typedef struct binstree BinSTree;

int* rand_nums(int max, int n);
BinTree* insert_level(int* nums, int n);
BinSTree* insert_bst(int* nums, int n);

#endif
